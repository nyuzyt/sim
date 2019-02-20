ACC=
CC=$(ACC) gcc
REMCFLAGS     = -Wall -Wshadow \
			 -I.. -I../INPUTACTIONS\
		         -DLIST_STATS -DLIST_HISTOGRAM $(SIMGRAPH)

DEST	      = .

HDRS	      = fabric.h\
				fabricTable.h\
				inputAction.h

INSTALL	      = /etc/install

LD	          = ld

LDFLAGS	      =

LIBS	      =

OBJS	      = ${SRCS:.c=.o}

PRINT	      = pr

PROGRAM       = fabrics.o

SHELL	      = /bin/sh

SRCS	      = crossbar.c \
                output.c

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

depend:;	makedepend -o.o -- $(REMCFLAGS) -- $(SRCS)

echo:;		@echo $(HDRS) $(SRCS)

index:;		ctags -wx $(HDRS) $(SRCS)

install::	$(PROGRAM)
		@echo Installing $(PROGRAM) in $(DEST)
#		@-strip $(PROGRAM)
		if [ $(DEST) != . ]; then \
		(rm -f $(DEST)/$(PROGRAM); $(INSTALL) -f $(DEST) $(PROGRAM)); fi

print:;		@$(PRINT) $(HDRS) $(SRCS)

tags:           $(HDRS) $(SRCS); @ctags $(HDRS) $(SRCS)

update:		$(DEST)/$(PROGRAM)

###
# DO NOT DELETE THIS LINE -- make depend depends on it.

crossbar.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
crossbar.o: /usr/include/libio.h /usr/include/_G_config.h
crossbar.o: /usr/include/wchar.h /usr/include/xlocale.h /usr/include/stdlib.h
crossbar.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h ../stat.h
crossbar.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
crossbar.o: ../latencyStats.h ../functionTable.h fabric.h
crossbar.o: ../INPUTACTIONS/inputAction.h /usr/include/string.h
output.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
output.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
output.o: /usr/include/xlocale.h /usr/include/stdlib.h /usr/include/alloca.h
output.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h ../lists.h
output.o: ../switchStats.h ../types.h ../latencyStats.h ../functionTable.h
output.o: fabric.h ../INPUTACTIONS/inputAction.h /usr/include/string.h
