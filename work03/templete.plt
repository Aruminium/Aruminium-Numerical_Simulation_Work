# label
set xlabel "x"
set ylabel "f(x)"

# range
set xrange [0.5:1.05]
set yrange [0.49:0.9]

# tics
set xtics 0.05
set ytics 0.01

set arrow from 0.785398, 0 to 0.785398, 0.707106 nohead
set arrow from 0, 0.707106 to 0.785398, 0.707106 nohead
set key box
set key left top
set grid