# ../sim -l1000
# ../sim -l1000
Numswitches 1
Switch 0
	Numinputs    8
	Numoutputs   31
	InputAction  defaultInputAction 
	OutputAction defaultOutputAction
	Fabric       crossbar
	Algorithm	mcast_random
	0	bernoulli_iid_uniform -m -u 0.22
	1	bernoulli_iid_uniform -m -u 0.22
	2	bernoulli_iid_uniform -m -u 0.22
	3	bernoulli_iid_uniform -m -u 0.22
	4	bernoulli_iid_uniform -m -u 0.22
	5	bernoulli_iid_uniform -m -u 0.22
	6	bernoulli_iid_uniform -m -u 0.22
	7	bernoulli_iid_uniform -m -u 0.22
	Stats
		Arrivals
		Departures
		Latency 
		Occupancy (*, m)
	Histograms
		Arrivals 
		Departures
		Latency (1, m)
		Occupancy 
