ACC=
CC=$(ACC) gcc
REMCFLAGS     = -Wall -Wshadow -I.. -DLIST_STATS -DLIST_HISTOGRAM $(SIMGRAPH)

DEST	      = .

HDRS	      = outputAction.h \
		outputActionTable.h

INSTALL	      = /etc/install

LD	      = ld

LDFLAGS	      =

LIBS	      =

MAKEFILE      = Makefile

OBJS	      = ${SRCS:.c=.o}

PRINT	      = pr

PROGRAM       = outputActions.o

SHELL	      = /bin/sh

SRCS	      = defaultOutputAction.c \
		strictPriorityOutputAction.c \
		subportOutputAction.c

SYSHDRS	      =

all:		    
		$(MAKE) optall

optall:		
		$(MAKE) $(PROGRAM) CFLAGS="-O3 $(REMCFLAGS)"

debugall:	
		$(MAKE) $(PROGRAM) CFLAGS="-g $(REMCFLAGS)"


$(PROGRAM)::     $(OBJS) $(LIBS)
		@echo "Linking clean sim: $(PROGRAM) ..."
		$(LD) -r $(OBJS) $(LDFLAGS) $(LIBS) -o $(PROGRAM)
		@echo "done"

clean:;		rm -f $(OBJS) $(PROGRAM) core

clobber:;	rm -f $(OBJS) $(PROGRAM) core tags

##depend:;	@mkmf -f $(MAKEFILE) ROOT=$(ROOT)

depend:;	makedepend -o.o -- $(REMCFLAGS) -- $(SRCS)

echo:;		@echo $(HDRS) $(SRCS)

index:;		ctags -wx $(HDRS) $(SRCS)

install::	$(PROGRAM)
		@echo Installing $(PROGRAM) in $(DEST)
#		@-strip $(PROGRAM)
		@if [ $(DEST) != . ]; then \
		(rm -f $(DEST)/$(PROGRAM); $(INSTALL) -f $(DEST) $(PROGRAM)); fi

print:;		@$(PRINT) $(HDRS) $(SRCS)

tags:           $(HDRS) $(SRCS); @ctags $(HDRS) $(SRCS)

update:		$(DEST)/$(PROGRAM)

###
# DO NOT DELETE THIS LINE -- make depend depends on it.

defaultOutputAction.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
defaultOutputAction.o: /usr/include/libio.h /usr/include/_G_config.h
defaultOutputAction.o: /usr/include/wchar.h /usr/include/xlocale.h
defaultOutputAction.o: /usr/include/stdlib.h /usr/include/alloca.h
defaultOutputAction.o: /usr/include/math.h ../bitmap.h ../stat.h
defaultOutputAction.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
defaultOutputAction.o: ../latencyStats.h ../functionTable.h outputAction.h
strictPriorityOutputAction.o: ../sim.h /usr/include/stdio.h
strictPriorityOutputAction.o: /usr/include/features.h /usr/include/libio.h
strictPriorityOutputAction.o: /usr/include/_G_config.h /usr/include/wchar.h
strictPriorityOutputAction.o: /usr/include/xlocale.h /usr/include/stdlib.h
strictPriorityOutputAction.o: /usr/include/alloca.h /usr/include/math.h
strictPriorityOutputAction.o: ../bitmap.h ../stat.h ../histogram.h ../lists.h
strictPriorityOutputAction.o: ../switchStats.h ../types.h ../latencyStats.h
strictPriorityOutputAction.o: ../functionTable.h outputAction.h
subportOutputAction.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
subportOutputAction.o: /usr/include/libio.h /usr/include/_G_config.h
subportOutputAction.o: /usr/include/wchar.h /usr/include/xlocale.h
subportOutputAction.o: /usr/include/stdlib.h /usr/include/alloca.h
subportOutputAction.o: /usr/include/math.h ../bitmap.h ../stat.h
subportOutputAction.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
subportOutputAction.o: ../latencyStats.h ../functionTable.h outputAction.h
