# range
set xrange [1.150:1.200]
set yrange [0:11]

# tics
set xtics 0.005
set ytics 1

set style fill solid border lc rgb "black"
plot "Direct.dat" using 1:2 with boxes lw 1 lc rgb "light-cyan" notitle