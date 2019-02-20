ACC=
CC=$(ACC) gcc
REMCFLAGS	  = -Wall -Wshadow -DLIST_STATS -DLIST_HISTOGRAM $(SIMGRAPH) \
				-I.. -I../INPUTACTIONS

DEST	      = .

HDRS	      = traffic.h \
		trafficTable.h

INSTALL	      = /etc/install

LD	      = ld

LDFLAGS	      =

LIBS	      =

MAKEFILE      = Makefile

OBJS	      = ${SRCS:.c=.o}

PRINT	      = pr

PROGRAM       = traffic.o

SHELL	      = /bin/sh

SRCS	      = bernoulli_iid_nonuniform.c \
		bernoulli_iid_uniform.c \
		null.c \
		keepfull.c \
		periodicTrace.c \
		trace.c \
		tracePacket.c \
		bursty_nonuniform.c \
		bursty.c

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
		if [ $(DEST) != . ]; then \
		(rm -f $(DEST)/$(PROGRAM); $(INSTALL) -f $(DEST) $(PROGRAM)); fi

print:;		@$(PRINT) $(HDRS) $(SRCS)

tags:           $(HDRS) $(SRCS); @ctags $(HDRS) $(SRCS)

update:		$(DEST)/$(PROGRAM)

###
# DO NOT DELETE THIS LINE -- make depend depends on it.

bernoulli_iid_nonuniform.o: /usr/include/stdio.h /usr/include/features.h
bernoulli_iid_nonuniform.o: /usr/include/libio.h /usr/include/_G_config.h
bernoulli_iid_nonuniform.o: /usr/include/wchar.h /usr/include/xlocale.h
bernoulli_iid_nonuniform.o: /usr/include/stdlib.h /usr/include/alloca.h
bernoulli_iid_nonuniform.o: ../sim.h /usr/include/math.h ../bitmap.h
bernoulli_iid_nonuniform.o: ../stat.h ../histogram.h ../lists.h
bernoulli_iid_nonuniform.o: ../switchStats.h ../types.h ../latencyStats.h
bernoulli_iid_nonuniform.o: ../functionTable.h traffic.h
bernoulli_iid_nonuniform.o: ../INPUTACTIONS/inputAction.h
bernoulli_iid_nonuniform.o: /usr/include/string.h
bernoulli_iid_uniform.o: /usr/include/stdio.h /usr/include/features.h
bernoulli_iid_uniform.o: /usr/include/libio.h /usr/include/_G_config.h
bernoulli_iid_uniform.o: /usr/include/wchar.h /usr/include/xlocale.h
bernoulli_iid_uniform.o: /usr/include/stdlib.h /usr/include/alloca.h ../sim.h
bernoulli_iid_uniform.o: /usr/include/math.h ../bitmap.h ../stat.h
bernoulli_iid_uniform.o: ../histogram.h ../lists.h ../switchStats.h
bernoulli_iid_uniform.o: ../types.h ../latencyStats.h ../functionTable.h
bernoulli_iid_uniform.o: traffic.h ../INPUTACTIONS/inputAction.h
bernoulli_iid_uniform.o: /usr/include/string.h
null.o: /usr/include/stdio.h /usr/include/features.h /usr/include/libio.h
null.o: /usr/include/_G_config.h /usr/include/wchar.h /usr/include/xlocale.h
null.o: /usr/include/stdlib.h /usr/include/alloca.h ../sim.h
null.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h ../lists.h
null.o: ../switchStats.h ../types.h ../latencyStats.h ../functionTable.h
null.o: traffic.h
keepfull.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
keepfull.o: /usr/include/libio.h /usr/include/_G_config.h
keepfull.o: /usr/include/wchar.h /usr/include/xlocale.h /usr/include/stdlib.h
keepfull.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h ../stat.h
keepfull.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
keepfull.o: ../latencyStats.h ../functionTable.h traffic.h
keepfull.o: ../INPUTACTIONS/inputAction.h
periodicTrace.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
periodicTrace.o: /usr/include/libio.h /usr/include/_G_config.h
periodicTrace.o: /usr/include/wchar.h /usr/include/xlocale.h
periodicTrace.o: /usr/include/stdlib.h /usr/include/alloca.h
periodicTrace.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h
periodicTrace.o: ../lists.h ../switchStats.h ../types.h ../latencyStats.h
periodicTrace.o: ../functionTable.h traffic.h ../INPUTACTIONS/inputAction.h
trace.o: /usr/include/signal.h /usr/include/features.h /usr/include/time.h
trace.o: /usr/include/unistd.h /usr/include/getopt.h /usr/include/ctype.h
trace.o: /usr/include/endian.h /usr/include/xlocale.h /usr/include/string.h
trace.o: ../sim.h /usr/include/stdio.h /usr/include/libio.h
trace.o: /usr/include/_G_config.h /usr/include/wchar.h /usr/include/stdlib.h
trace.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h ../stat.h
trace.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
trace.o: ../latencyStats.h ../functionTable.h traffic.h
trace.o: ../INPUTACTIONS/inputAction.h
tracePacket.o: /usr/include/signal.h /usr/include/features.h
tracePacket.o: /usr/include/time.h /usr/include/string.h
tracePacket.o: /usr/include/xlocale.h /usr/include/unistd.h
tracePacket.o: /usr/include/getopt.h /usr/include/ctype.h
tracePacket.o: /usr/include/endian.h ../sim.h /usr/include/stdio.h
tracePacket.o: /usr/include/libio.h /usr/include/_G_config.h
tracePacket.o: /usr/include/wchar.h /usr/include/stdlib.h
tracePacket.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h
tracePacket.o: ../stat.h ../histogram.h ../lists.h ../switchStats.h
tracePacket.o: ../types.h ../latencyStats.h ../functionTable.h traffic.h
tracePacket.o: ../INPUTACTIONS/inputAction.h trace.h
bursty_nonuniform.o: /usr/include/stdio.h /usr/include/features.h
bursty_nonuniform.o: /usr/include/libio.h /usr/include/_G_config.h
bursty_nonuniform.o: /usr/include/wchar.h /usr/include/xlocale.h
bursty_nonuniform.o: /usr/include/stdlib.h /usr/include/alloca.h ../sim.h
bursty_nonuniform.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h
bursty_nonuniform.o: ../lists.h ../switchStats.h ../types.h ../latencyStats.h
bursty_nonuniform.o: ../functionTable.h traffic.h
bursty_nonuniform.o: ../INPUTACTIONS/inputAction.h /usr/include/string.h
bursty.o: /usr/include/stdio.h /usr/include/features.h /usr/include/libio.h
bursty.o: /usr/include/_G_config.h /usr/include/wchar.h
bursty.o: /usr/include/xlocale.h /usr/include/stdlib.h /usr/include/alloca.h
bursty.o: ../sim.h /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h
bursty.o: ../lists.h ../switchStats.h ../types.h ../latencyStats.h
bursty.o: ../functionTable.h traffic.h ../INPUTACTIONS/inputAction.h
bursty.o: /usr/include/string.h
