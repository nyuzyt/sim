
/* ****************************************************************
 * Copyright Stanford University 1998,99 - All Rights Reserved
 ****************************************************************** 

 * Permission to use, copy, modify, and distribute this software 
 * and its documentation for any purpose is hereby granted without 
 * fee, provided that the above copyright notice appears in all copies
 * and that both the copyright notice, this permission notice, and 
 * the following disclaimer appear in supporting documentation, and 
 * that the name of Stanford University, not be used in advertising or 
 * publicity pertaining to distribution of the software without specific,
 * written prior permission.
 * 
 * STANFORD UNIVERSITY, DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS
 * SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND 
 * FITNESS. IN NO EVENT SHALL STANFORD UNIVERSITY BE LIABLE FOR ANY 
 * SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER 
 * RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION 
 * OF CONTRACT, NEGLIGENCE OR OTHER ACTION, ARISING OUT OF OR IN 
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * The Sim Web Site : http://klamath.stanford.edu/tools/SIM
 * The SIM Mailing List: sim-simulator@lists.stanford.edu

 * Send mail to the above email address with "subscribe sim-simulator" in
 * the body of the message.
 *
 */

#include <string.h>
#include "sim.h"
#include "algorithm.h"

/*  Determines switch configuration  for multicast input fifos */
/*  Configuration is filled into aSwitch->fabric.interconnect.matrix array 	*/

/* Each output selects randomly and unifromly over the requesting inputs. */


static int vectorSum();
static int vectorCommon();
static void vectorSubtract();
static void vectorPrint();
static void matrixSubtract();
static int allocateMinResidue();


void
mcast_dist_residue(action, aSwitch, argc, argv)
  SwitchAction action;
Switch *aSwitch;
int argc;
char **argv;
{
  int input, output;

  if(debug_algorithm)
    printf("Algorithm 'mcast_dist_residue()' called by switch %d\n", aSwitch->switchNumber);
	
  switch(action) {
  case SCHEDULING_USAGE:
    fprintf(stderr, "No options for \"mcast_dist_residue\" scheduling algorithm.\n");
    break;
  case SCHEDULING_INIT:	
    if(debug_algorithm)
      printf("	SCHEDULING_INIT\n");

    break;

  case SCHEDULING_EXEC:
    {
      int  selection, numEqual, numFabricOutputs, least, common, amount;
      static int *inputAllocated, *residue=NULL, **request, 
	**residueAllocate, *leastInput, *temp;
      struct List *fifo;
      Cell *aCell;
      unsigned long age, leastAge;

      if(debug_algorithm)
	{
	  printf("	SCHEDULING_EXEC\n");
	}

      numFabricOutputs = aSwitch->numOutputs *
	aSwitch->fabric.Xbar_numOutputLines;

      if(!residue)
	{
	  residue = (int *)  malloc(sizeof(int) * numFabricOutputs);
	  inputAllocated = (int *) malloc(sizeof(int)*aSwitch->numInputs);
	  leastInput = (int *)  malloc(sizeof(int) * aSwitch->numInputs);
	  temp = (int *)  malloc(sizeof(int) * numFabricOutputs);

	  request = (int **) malloc(sizeof(int *) * aSwitch->numInputs);
	  residueAllocate = 
	    (int **) malloc(sizeof(int *)*aSwitch->numInputs);
	  for(input=0;input < aSwitch->numInputs; input++)
	    {
	      request[input]=(int *)malloc(sizeof(int)*numFabricOutputs);
	      residueAllocate[input] = (int *) 
		malloc(sizeof(int) * numFabricOutputs);
	    }
	}

      /* INITIALIZE */
      for(input=0;input<aSwitch->numInputs; input++)
	{
	  memset(request[input], 0, sizeof(int) * numFabricOutputs);
	  memset(residueAllocate[input], 0, sizeof(int)*numFabricOutputs);
	}
      memset(residue, 0, sizeof(int) * numFabricOutputs);
      memset(inputAllocated, 0, sizeof(int) * aSwitch->numInputs);

      /* Mark cells that have newly arrived at head of queue */
      for(input=0;input < aSwitch->numInputs; input++)
	{
	  fifo = aSwitch->inputBuffer[input]->mcastFifo[DEFAULT_PRIORITY];
	  if(fifo->number)
	    {
	      aCell = (Cell *) fifo->head->Object;
	      if(aCell->commonStats.headArrivalTime==NONE)
		aCell->commonStats.headArrivalTime=now;
	    }
	}

      /* Make the Request matrix and Residue vector */
      if(debug_algorithm)
	{
	  printf("-------------\n");
	  printf("Request:\n");
	}

      for(input=0; input<aSwitch->numInputs; input++)
	{
	  fifo = aSwitch->inputBuffer[input]->mcastFifo[DEFAULT_PRIORITY];
	  if(fifo->number)
	    {
	      aCell = (Cell *) fifo->head->Object;
	      for(output=0;output<numFabricOutputs;output++)
		{
		  if( bitmapIsBitSet(output, &aCell->outputs) )
		    {
		      residue[output]++;
		      request[input][output]=1;
		    }
		}
	    }
	  if(debug_algorithm)
	    vectorPrint(stdout, request[input], numFabricOutputs);
	}
      for(output=0;output<numFabricOutputs;output++)
	if( residue[output]>0 ) residue[output]--;
      if(debug_algorithm)
	{
	  printf("Residue:\n");
	  vectorPrint(stdout, residue, numFabricOutputs);
	  printf("-------------\n");
	}
	
      while( vectorSum(residue, numFabricOutputs) > 0 )
	{

	  /* Find input with least in common with residue */
	  for(input=0, numEqual=NONE, least=numFabricOutputs, leastAge=0;
	      input<aSwitch->numInputs;input++)
	    {
	      if(inputAllocated[input]) continue;
	      memcpy(temp, request[input], sizeof(int)*numFabricOutputs);
	      vectorSubtract(temp, residueAllocate[input], 
			     numFabricOutputs);
	      common = 
		vectorCommon(temp,residue,numFabricOutputs);	
	      if(common==0) continue;

	      if(common<least) 
		{
		  numEqual=0;
		  least = common;
		  leastInput[numEqual] = input;
		  aCell = (Cell *) aSwitch->inputBuffer[input]->mcastFifo[DEFAULT_PRIORITY]->head->Object;
		  leastAge = now - aCell->commonStats.headArrivalTime;
		}
	      else if(common==least) 
		{
		  aCell = (Cell *) 
		    aSwitch->inputBuffer[input]->mcastFifo[DEFAULT_PRIORITY]->head->Object;
		  age = now - aCell->commonStats.headArrivalTime;
		  /* printf("common: %d age: %lu leastage: %lu\n", common, age, leastAge); */
		  if(age<leastAge)
		    {
		      numEqual=0;
		      least = common;
		      leastInput[numEqual] = input;
		      leastAge = age;
		      /* printf("*******\n"); */
		    }
		  else if(age==leastAge)
		    {
		      numEqual++;
		      leastInput[numEqual] = input;
		    }
		}
					
	    }
	  /* Select leastInput */
	  if(numEqual==NONE)
	    {
	      memset(inputAllocated, 0, sizeof(int)*aSwitch->numInputs);
	      continue;
	    }
	  else if(numEqual==0)
	    input = leastInput[0];
	  else
	    {
	      selection  = (int)lrand48()%(numEqual+1);
	      input = leastInput[ selection ];
	    }
	  amount = allocateMinResidue(request[input], residue, 
				      residueAllocate[input], numFabricOutputs);
	  if(debug_algorithm)
	    {
	      printf("Allocating %d residue to input %d\n", amount,input);
	      vectorPrint(stdout, request[input], numFabricOutputs);
	      vectorPrint(stdout, residueAllocate[input], numFabricOutputs);
	    }
	  inputAllocated[input]=1;

	}

      /* Subtract residue from request matrix */
      matrixSubtract(request, 
		     residueAllocate, aSwitch->numInputs, numFabricOutputs);

      if(debug_algorithm)
	printf("Configuration:\n");
      for(input=0; input<aSwitch->numInputs; input++)
	{
	  if(debug_algorithm)
	    vectorPrint(stdout, request[input], numFabricOutputs);
	  for(output=0; output<numFabricOutputs; output++)
	    {
	      if(request[input][output])
		{
		  aSwitch->fabric.Xbar_matrix[output].input = input;
		  aSwitch->fabric.Xbar_matrix[output].cell = (Cell *)
		    aSwitch->inputBuffer[input]->mcastFifo[DEFAULT_PRIORITY]->head->Object;
		}
	    }
	}
      if(debug_algorithm)
	printf("\n\n");


      break;
    }
  default:
    break;
  }

	

  if(debug_algorithm)
    printf("Algorithm 'mcast_dist_residue()' completed for switch %d\n", 
	   aSwitch->switchNumber);
}

/***********************************************************************/

static int
vectorSum(vector, size)
  int *vector;
int size;
{
  int i,sum=0;
  for(i=0;i<size;i++)
    {
      sum += vector[i];
    }
  return(sum);
}

static int
vectorCommon(vector1, vector2, size)
  int *vector1, *vector2;
int size;
{	
  int i, sum=0;
  for(i=0;i<size;i++)
    {
      if(vector1[i]>0 && vector2[i]>0)
	sum ++;
    }
  return(sum);
}

/* Subtracts vector2 from vector1, leaving result in vector1 */
static void
vectorSubtract(vector1, vector2, size)
  int *vector1, *vector2;
int size;
{
  int i;

  for(i=0; i< size; i++)
    {
      vector1[i] = vector1[i] - vector2[i];
    }
}

static void
vectorPrint(fp, vector, size)
  FILE *fp;
int *vector;
int size;
{
  int i;
  for(i=0;i<size;i++)
    {
      fprintf(fp, "%d", vector[i]);
    }
  fprintf(fp,"\n");
}

/* Subtracts matrix2 from matrix1, leaving result in matrix1 */
static void
matrixSubtract(matrix1, matrix2, rows, cols)
  int **matrix1, **matrix2;
int rows, cols;
{
  int i,j;

  for(i=0; i< rows; i++)
    {
      for(j=0;j<cols;j++)
	{
	  matrix1[i][j] = matrix1[i][j] - matrix2[i][j];
	}
    }
}

static int
allocateMinResidue(request, residue, residueAllocate, size)
  int *request, *residue, *residueAllocate;
int size;
{
  int i;
  for(i=0;i<size;i++)
    {
      if(request[i]>0 && residue[i]>0 && residueAllocate[i]==0)
	{
	  if(residueAllocate[i])
	    fprintf(stderr,"Allocating residue twice: output %d\n", i);
	  residueAllocate[i]=1;
	  residue[i]--;
	  return(1);
	}
    }
  /*fprintf(stderr, "No residue allocated!!!!\n");*/
  return(0);
}

