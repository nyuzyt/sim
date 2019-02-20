ACC=
CC=$(ACC) gcc
REMCFLAGS	      =  -Wall -Wshadow -I.. -DLIST_HISTOGRAM -DLIST_STATS $(SIMGRAPH)

DEST	      = .

HDRS	      = algorithm.h\
		algorithmTable.h\
		assign2.h\
		miscfns.h\
		pim.h\
		rr.h\
		scheduleStats.h\

INSTALL	      = /etc/install

LD	      = ld

LDFLAGS	      =

LIBS	      =

OBJS	      = ${SRCS:.c=.o}

PRINT	      = pr

PROGRAM       = algorithms.o

SHELL	      = /bin/sh

SRCS          = ap2driver.c \
        assign2sap.c \
        fifo.c \
        future.c \
        gs_lqf.c \
        gs_ocf.c \
        gsaMatch.c \
        ilpf.c \
        ilqf.c \
        iocf.c \
        iopf.c \
        lpf.c \
        lpf_delay.c \
        lqf.c \
        maximum.c \
        maxrand.c \
        maxsize.c \
        mucf.c \
        mcast_conc_residue.c \
        mcast_dist_residue.c \
        mcast_random.c \
        mcast_slip.c \
        mcast_tatra.c \
        mcast_wt_fanout.c \
        mcast_wt_residue.c \
        miscfns.c\
        neural.c \
        nullSchedulingAlgorithm.c \
        ocf.c \
        opf.c \
        opf_delay.c \
        pim.c \
        pri_fifo.c \
        pri_lqf.c \
        pri_mcast_random.c \
        pri_ocf.c \
        pri_islip.c\
        pri_combo.c\
        pristrict_lqf.c \
        pristrict_ocf.c \
        rr.c \
        scheduleStats.c \
        islip.c \
        wfa.c \
        wwfa.c

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
		@if [ $(DEST) != . ]; then \
		(rm -f $(DEST)/$(PROGRAM); $(INSTALL) -f $(DEST) $(PROGRAM)); fi

print:;		@$(PRINT) $(HDRS) $(SRCS)

tags:           $(HDRS) $(SRCS); @ctags $(HDRS) $(SRCS)

update:		$(DEST)/$(PROGRAM)

# DO NOT DELETE THIS LINE -- make depend depends on it.

ap2driver.o: /usr/include/stdio.h /usr/include/features.h
ap2driver.o: /usr/include/libio.h /usr/include/_G_config.h
ap2driver.o: /usr/include/wchar.h /usr/include/xlocale.h
ap2driver.o: /usr/include/malloc.h assign2.h /usr/include/limits.h
assign2sap.o: /usr/include/stdio.h /usr/include/features.h
assign2sap.o: /usr/include/libio.h /usr/include/_G_config.h
assign2sap.o: /usr/include/wchar.h /usr/include/xlocale.h
assign2sap.o: /usr/include/malloc.h assign2.h /usr/include/limits.h
fifo.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
fifo.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
fifo.o: /usr/include/xlocale.h /usr/include/stdlib.h /usr/include/alloca.h
fifo.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h ../lists.h
fifo.o: ../switchStats.h ../types.h ../latencyStats.h ../functionTable.h
fifo.o: algorithm.h
future.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
future.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
future.o: /usr/include/xlocale.h /usr/include/stdlib.h /usr/include/alloca.h
future.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h ../lists.h
future.o: ../switchStats.h ../types.h ../latencyStats.h ../functionTable.h
future.o: algorithm.h future.h
gs_lqf.o: /usr/include/string.h /usr/include/features.h
gs_lqf.o: /usr/include/xlocale.h ../sim.h /usr/include/stdio.h
gs_lqf.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
gs_lqf.o: /usr/include/stdlib.h /usr/include/alloca.h /usr/include/math.h
gs_lqf.o: ../bitmap.h ../stat.h ../histogram.h ../lists.h ../switchStats.h
gs_lqf.o: ../types.h ../latencyStats.h ../functionTable.h algorithm.h
gs_lqf.o: assign2.h /usr/include/limits.h
gs_ocf.o: /usr/include/string.h /usr/include/features.h
gs_ocf.o: /usr/include/xlocale.h ../sim.h /usr/include/stdio.h
gs_ocf.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
gs_ocf.o: /usr/include/stdlib.h /usr/include/alloca.h /usr/include/math.h
gs_ocf.o: ../bitmap.h ../stat.h ../histogram.h ../lists.h ../switchStats.h
gs_ocf.o: ../types.h ../latencyStats.h ../functionTable.h algorithm.h
gs_ocf.o: assign2.h /usr/include/limits.h
gsaMatch.o: /usr/include/stdio.h /usr/include/features.h /usr/include/libio.h
gsaMatch.o: /usr/include/_G_config.h /usr/include/wchar.h
gsaMatch.o: /usr/include/xlocale.h /usr/include/stdlib.h
gsaMatch.o: /usr/include/alloca.h /usr/include/malloc.h
ilpf.o: /usr/include/string.h /usr/include/features.h /usr/include/xlocale.h
ilpf.o: ../sim.h /usr/include/stdio.h /usr/include/libio.h
ilpf.o: /usr/include/_G_config.h /usr/include/wchar.h /usr/include/stdlib.h
ilpf.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h ../stat.h
ilpf.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
ilpf.o: ../latencyStats.h ../functionTable.h algorithm.h assign2.h
ilpf.o: /usr/include/limits.h
ilqf.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
ilqf.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
ilqf.o: /usr/include/xlocale.h /usr/include/stdlib.h /usr/include/alloca.h
ilqf.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h ../lists.h
ilqf.o: ../switchStats.h ../types.h ../latencyStats.h ../functionTable.h
ilqf.o: algorithm.h ilqf.h scheduleStats.h
iocf.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
iocf.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
iocf.o: /usr/include/xlocale.h /usr/include/stdlib.h /usr/include/alloca.h
iocf.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h ../lists.h
iocf.o: ../switchStats.h ../types.h ../latencyStats.h ../functionTable.h
iocf.o: algorithm.h ilqf.h scheduleStats.h
iopf.o: /usr/include/string.h /usr/include/features.h /usr/include/xlocale.h
iopf.o: ../sim.h /usr/include/stdio.h /usr/include/libio.h
iopf.o: /usr/include/_G_config.h /usr/include/wchar.h /usr/include/stdlib.h
iopf.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h ../stat.h
iopf.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
iopf.o: ../latencyStats.h ../functionTable.h algorithm.h assign2.h
iopf.o: /usr/include/limits.h
lpf.o: /usr/include/string.h /usr/include/features.h /usr/include/xlocale.h
lpf.o: ../sim.h /usr/include/stdio.h /usr/include/libio.h
lpf.o: /usr/include/_G_config.h /usr/include/wchar.h /usr/include/stdlib.h
lpf.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h ../stat.h
lpf.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
lpf.o: ../latencyStats.h ../functionTable.h algorithm.h assign2.h
lpf.o: /usr/include/limits.h
lpf_delay.o: /usr/include/string.h /usr/include/features.h
lpf_delay.o: /usr/include/xlocale.h ../sim.h /usr/include/stdio.h
lpf_delay.o: /usr/include/libio.h /usr/include/_G_config.h
lpf_delay.o: /usr/include/wchar.h /usr/include/stdlib.h /usr/include/alloca.h
lpf_delay.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h
lpf_delay.o: ../lists.h ../switchStats.h ../types.h ../latencyStats.h
lpf_delay.o: ../functionTable.h algorithm.h assign2.h /usr/include/limits.h
lqf.o: /usr/include/string.h /usr/include/features.h /usr/include/xlocale.h
lqf.o: ../sim.h /usr/include/stdio.h /usr/include/libio.h
lqf.o: /usr/include/_G_config.h /usr/include/wchar.h /usr/include/stdlib.h
lqf.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h ../stat.h
lqf.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
lqf.o: ../latencyStats.h ../functionTable.h algorithm.h assign2.h
lqf.o: /usr/include/limits.h
maximum.o: /usr/include/string.h /usr/include/features.h
maximum.o: /usr/include/xlocale.h ../sim.h /usr/include/stdio.h
maximum.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
maximum.o: /usr/include/stdlib.h /usr/include/alloca.h /usr/include/math.h
maximum.o: ../bitmap.h ../stat.h ../histogram.h ../lists.h ../switchStats.h
maximum.o: ../types.h ../latencyStats.h ../functionTable.h algorithm.h
maxrand.o: /usr/include/string.h /usr/include/features.h
maxrand.o: /usr/include/xlocale.h ../sim.h /usr/include/stdio.h
maxrand.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
maxrand.o: /usr/include/stdlib.h /usr/include/alloca.h /usr/include/math.h
maxrand.o: ../bitmap.h ../stat.h ../histogram.h ../lists.h ../switchStats.h
maxrand.o: ../types.h ../latencyStats.h ../functionTable.h algorithm.h
maxsize.o: /usr/include/string.h /usr/include/features.h
maxsize.o: /usr/include/xlocale.h ../sim.h /usr/include/stdio.h
maxsize.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
maxsize.o: /usr/include/stdlib.h /usr/include/alloca.h /usr/include/math.h
maxsize.o: ../bitmap.h ../stat.h ../histogram.h ../lists.h ../switchStats.h
maxsize.o: ../types.h ../latencyStats.h ../functionTable.h algorithm.h
maxsize.o: assign2.h /usr/include/limits.h
mucf.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
mucf.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
mucf.o: /usr/include/xlocale.h /usr/include/stdlib.h /usr/include/alloca.h
mucf.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h ../lists.h
mucf.o: ../switchStats.h ../types.h ../latencyStats.h ../functionTable.h
mucf.o: algorithm.h ilqf.h scheduleStats.h
mcast_conc_residue.o: /usr/include/string.h /usr/include/features.h
mcast_conc_residue.o: /usr/include/xlocale.h ../sim.h /usr/include/stdio.h
mcast_conc_residue.o: /usr/include/libio.h /usr/include/_G_config.h
mcast_conc_residue.o: /usr/include/wchar.h /usr/include/stdlib.h
mcast_conc_residue.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h
mcast_conc_residue.o: ../stat.h ../histogram.h ../lists.h ../switchStats.h
mcast_conc_residue.o: ../types.h ../latencyStats.h ../functionTable.h
mcast_conc_residue.o: algorithm.h
mcast_dist_residue.o: /usr/include/string.h /usr/include/features.h
mcast_dist_residue.o: /usr/include/xlocale.h ../sim.h /usr/include/stdio.h
mcast_dist_residue.o: /usr/include/libio.h /usr/include/_G_config.h
mcast_dist_residue.o: /usr/include/wchar.h /usr/include/stdlib.h
mcast_dist_residue.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h
mcast_dist_residue.o: ../stat.h ../histogram.h ../lists.h ../switchStats.h
mcast_dist_residue.o: ../types.h ../latencyStats.h ../functionTable.h
mcast_dist_residue.o: algorithm.h
mcast_random.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
mcast_random.o: /usr/include/libio.h /usr/include/_G_config.h
mcast_random.o: /usr/include/wchar.h /usr/include/xlocale.h
mcast_random.o: /usr/include/stdlib.h /usr/include/alloca.h
mcast_random.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h
mcast_random.o: ../lists.h ../switchStats.h ../types.h ../latencyStats.h
mcast_random.o: ../functionTable.h algorithm.h
mcast_slip.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
mcast_slip.o: /usr/include/libio.h /usr/include/_G_config.h
mcast_slip.o: /usr/include/wchar.h /usr/include/xlocale.h
mcast_slip.o: /usr/include/stdlib.h /usr/include/alloca.h /usr/include/math.h
mcast_slip.o: ../bitmap.h ../stat.h ../histogram.h ../lists.h
mcast_slip.o: ../switchStats.h ../types.h ../latencyStats.h
mcast_slip.o: ../functionTable.h algorithm.h mcast_slip.h scheduleStats.h
mcast_tatra.o: /usr/include/stdio.h /usr/include/features.h
mcast_tatra.o: /usr/include/libio.h /usr/include/_G_config.h
mcast_tatra.o: /usr/include/wchar.h /usr/include/xlocale.h
mcast_tatra.o: /usr/include/stdlib.h /usr/include/alloca.h ../sim.h
mcast_tatra.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h
mcast_tatra.o: ../lists.h ../switchStats.h ../types.h ../latencyStats.h
mcast_tatra.o: ../functionTable.h algorithm.h
mcast_wt_fanout.o: /usr/include/stdio.h /usr/include/features.h
mcast_wt_fanout.o: /usr/include/libio.h /usr/include/_G_config.h
mcast_wt_fanout.o: /usr/include/wchar.h /usr/include/xlocale.h
mcast_wt_fanout.o: /usr/include/stdlib.h /usr/include/alloca.h ../sim.h
mcast_wt_fanout.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h
mcast_wt_fanout.o: ../lists.h ../switchStats.h ../types.h ../latencyStats.h
mcast_wt_fanout.o: ../functionTable.h algorithm.h
mcast_wt_residue.o: /usr/include/stdio.h /usr/include/features.h
mcast_wt_residue.o: /usr/include/libio.h /usr/include/_G_config.h
mcast_wt_residue.o: /usr/include/wchar.h /usr/include/xlocale.h
mcast_wt_residue.o: /usr/include/stdlib.h /usr/include/alloca.h
mcast_wt_residue.o: /usr/include/string.h ../sim.h /usr/include/math.h
mcast_wt_residue.o: ../bitmap.h ../stat.h ../histogram.h ../lists.h
mcast_wt_residue.o: ../switchStats.h ../types.h ../latencyStats.h
mcast_wt_residue.o: ../functionTable.h algorithm.h
miscfns.o: /usr/include/string.h /usr/include/features.h
miscfns.o: /usr/include/xlocale.h ../sim.h /usr/include/stdio.h
miscfns.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
miscfns.o: /usr/include/stdlib.h /usr/include/alloca.h /usr/include/math.h
miscfns.o: ../bitmap.h ../stat.h ../histogram.h ../lists.h ../switchStats.h
miscfns.o: ../types.h ../latencyStats.h ../functionTable.h rr.h
miscfns.o: scheduleStats.h
neural.o: /usr/include/stdlib.h /usr/include/features.h /usr/include/alloca.h
neural.o: /usr/include/math.h /usr/include/string.h /usr/include/xlocale.h
neural.o: ../sim.h /usr/include/stdio.h /usr/include/libio.h
neural.o: /usr/include/_G_config.h /usr/include/wchar.h ../bitmap.h ../stat.h
neural.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
neural.o: ../latencyStats.h ../functionTable.h algorithm.h neural.h
nullSchedulingAlgorithm.o: ../sim.h /usr/include/stdio.h
nullSchedulingAlgorithm.o: /usr/include/features.h /usr/include/libio.h
nullSchedulingAlgorithm.o: /usr/include/_G_config.h /usr/include/wchar.h
nullSchedulingAlgorithm.o: /usr/include/xlocale.h /usr/include/stdlib.h
nullSchedulingAlgorithm.o: /usr/include/alloca.h /usr/include/math.h
nullSchedulingAlgorithm.o: ../bitmap.h ../stat.h ../histogram.h ../lists.h
nullSchedulingAlgorithm.o: ../switchStats.h ../types.h ../latencyStats.h
nullSchedulingAlgorithm.o: ../functionTable.h algorithm.h
ocf.o: /usr/include/string.h /usr/include/features.h /usr/include/xlocale.h
ocf.o: ../sim.h /usr/include/stdio.h /usr/include/libio.h
ocf.o: /usr/include/_G_config.h /usr/include/wchar.h /usr/include/stdlib.h
ocf.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h ../stat.h
ocf.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
ocf.o: ../latencyStats.h ../functionTable.h algorithm.h assign2.h
ocf.o: /usr/include/limits.h
opf.o: /usr/include/string.h /usr/include/features.h /usr/include/xlocale.h
opf.o: ../sim.h /usr/include/stdio.h /usr/include/libio.h
opf.o: /usr/include/_G_config.h /usr/include/wchar.h /usr/include/stdlib.h
opf.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h ../stat.h
opf.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
opf.o: ../latencyStats.h ../functionTable.h algorithm.h assign2.h
opf.o: /usr/include/limits.h
opf_delay.o: /usr/include/string.h /usr/include/features.h
opf_delay.o: /usr/include/xlocale.h ../sim.h /usr/include/stdio.h
opf_delay.o: /usr/include/libio.h /usr/include/_G_config.h
opf_delay.o: /usr/include/wchar.h /usr/include/stdlib.h /usr/include/alloca.h
opf_delay.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h
opf_delay.o: ../lists.h ../switchStats.h ../types.h ../latencyStats.h
opf_delay.o: ../functionTable.h algorithm.h assign2.h /usr/include/limits.h
pim.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
pim.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
pim.o: /usr/include/xlocale.h /usr/include/stdlib.h /usr/include/alloca.h
pim.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h ../lists.h
pim.o: ../switchStats.h ../types.h ../latencyStats.h ../functionTable.h
pim.o: algorithm.h pim.h scheduleStats.h
pri_fifo.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
pri_fifo.o: /usr/include/libio.h /usr/include/_G_config.h
pri_fifo.o: /usr/include/wchar.h /usr/include/xlocale.h /usr/include/stdlib.h
pri_fifo.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h ../stat.h
pri_fifo.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
pri_fifo.o: ../latencyStats.h ../functionTable.h algorithm.h
pri_lqf.o: /usr/include/string.h /usr/include/features.h
pri_lqf.o: /usr/include/xlocale.h ../sim.h /usr/include/stdio.h
pri_lqf.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
pri_lqf.o: /usr/include/stdlib.h /usr/include/alloca.h /usr/include/math.h
pri_lqf.o: ../bitmap.h ../stat.h ../histogram.h ../lists.h ../switchStats.h
pri_lqf.o: ../types.h ../latencyStats.h ../functionTable.h algorithm.h
pri_lqf.o: assign2.h /usr/include/limits.h
pri_mcast_random.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
pri_mcast_random.o: /usr/include/libio.h /usr/include/_G_config.h
pri_mcast_random.o: /usr/include/wchar.h /usr/include/xlocale.h
pri_mcast_random.o: /usr/include/stdlib.h /usr/include/alloca.h
pri_mcast_random.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h
pri_mcast_random.o: ../lists.h ../switchStats.h ../types.h ../latencyStats.h
pri_mcast_random.o: ../functionTable.h algorithm.h
pri_ocf.o: /usr/include/string.h /usr/include/features.h
pri_ocf.o: /usr/include/xlocale.h ../sim.h /usr/include/stdio.h
pri_ocf.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
pri_ocf.o: /usr/include/stdlib.h /usr/include/alloca.h /usr/include/math.h
pri_ocf.o: ../bitmap.h ../stat.h ../histogram.h ../lists.h ../switchStats.h
pri_ocf.o: ../types.h ../latencyStats.h ../functionTable.h algorithm.h
pri_ocf.o: assign2.h /usr/include/limits.h
pri_islip.o: /usr/include/string.h /usr/include/features.h
pri_islip.o: /usr/include/xlocale.h ../sim.h /usr/include/stdio.h
pri_islip.o: /usr/include/libio.h /usr/include/_G_config.h
pri_islip.o: /usr/include/wchar.h /usr/include/stdlib.h /usr/include/alloca.h
pri_islip.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h
pri_islip.o: ../lists.h ../switchStats.h ../types.h ../latencyStats.h
pri_islip.o: ../functionTable.h algorithm.h pri_rr.h scheduleStats.h
pri_islip.o: miscfns.h
pri_combo.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
pri_combo.o: /usr/include/libio.h /usr/include/_G_config.h
pri_combo.o: /usr/include/wchar.h /usr/include/xlocale.h
pri_combo.o: /usr/include/stdlib.h /usr/include/alloca.h /usr/include/math.h
pri_combo.o: ../bitmap.h ../stat.h ../histogram.h ../lists.h ../switchStats.h
pri_combo.o: ../types.h ../latencyStats.h ../functionTable.h algorithm.h
pristrict_lqf.o: /usr/include/string.h /usr/include/features.h
pristrict_lqf.o: /usr/include/xlocale.h ../sim.h /usr/include/stdio.h
pristrict_lqf.o: /usr/include/libio.h /usr/include/_G_config.h
pristrict_lqf.o: /usr/include/wchar.h /usr/include/stdlib.h
pristrict_lqf.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h
pristrict_lqf.o: ../stat.h ../histogram.h ../lists.h ../switchStats.h
pristrict_lqf.o: ../types.h ../latencyStats.h ../functionTable.h algorithm.h
pristrict_lqf.o: assign2.h /usr/include/limits.h
pristrict_ocf.o: /usr/include/string.h /usr/include/features.h
pristrict_ocf.o: /usr/include/xlocale.h ../sim.h /usr/include/stdio.h
pristrict_ocf.o: /usr/include/libio.h /usr/include/_G_config.h
pristrict_ocf.o: /usr/include/wchar.h /usr/include/stdlib.h
pristrict_ocf.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h
pristrict_ocf.o: ../stat.h ../histogram.h ../lists.h ../switchStats.h
pristrict_ocf.o: ../types.h ../latencyStats.h ../functionTable.h algorithm.h
pristrict_ocf.o: assign2.h /usr/include/limits.h
rr.o: /usr/include/string.h /usr/include/features.h /usr/include/xlocale.h
rr.o: ../sim.h /usr/include/stdio.h /usr/include/libio.h
rr.o: /usr/include/_G_config.h /usr/include/wchar.h /usr/include/stdlib.h
rr.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h ../stat.h
rr.o: ../histogram.h ../lists.h ../switchStats.h ../types.h ../latencyStats.h
rr.o: ../functionTable.h algorithm.h rr.h scheduleStats.h miscfns.h
scheduleStats.o: ../sim.h /usr/include/stdio.h /usr/include/features.h
scheduleStats.o: /usr/include/libio.h /usr/include/_G_config.h
scheduleStats.o: /usr/include/wchar.h /usr/include/xlocale.h
scheduleStats.o: /usr/include/stdlib.h /usr/include/alloca.h
scheduleStats.o: /usr/include/math.h ../bitmap.h ../stat.h ../histogram.h
scheduleStats.o: ../lists.h ../switchStats.h ../types.h ../latencyStats.h
scheduleStats.o: ../functionTable.h scheduleStats.h
islip.o: /usr/include/string.h /usr/include/features.h /usr/include/xlocale.h
islip.o: ../sim.h /usr/include/stdio.h /usr/include/libio.h
islip.o: /usr/include/_G_config.h /usr/include/wchar.h /usr/include/stdlib.h
islip.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h ../stat.h
islip.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
islip.o: ../latencyStats.h ../functionTable.h algorithm.h rr.h
islip.o: scheduleStats.h miscfns.h
wfa.o: /usr/include/string.h /usr/include/features.h /usr/include/xlocale.h
wfa.o: ../sim.h /usr/include/stdio.h /usr/include/libio.h
wfa.o: /usr/include/_G_config.h /usr/include/wchar.h /usr/include/stdlib.h
wfa.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h ../stat.h
wfa.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
wfa.o: ../latencyStats.h ../functionTable.h algorithm.h assign2.h
wfa.o: /usr/include/limits.h
wwfa.o: /usr/include/string.h /usr/include/features.h /usr/include/xlocale.h
wwfa.o: ../sim.h /usr/include/stdio.h /usr/include/libio.h
wwfa.o: /usr/include/_G_config.h /usr/include/wchar.h /usr/include/stdlib.h
wwfa.o: /usr/include/alloca.h /usr/include/math.h ../bitmap.h ../stat.h
wwfa.o: ../histogram.h ../lists.h ../switchStats.h ../types.h
wwfa.o: ../latencyStats.h ../functionTable.h algorithm.h wwfa.h
wwfa.o: scheduleStats.h
