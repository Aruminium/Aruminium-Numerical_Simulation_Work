set ylabel "y"

# range
set xrange [-0.1:1.75]
set yrange [-0.1:3.1]

# tics
set xtics 0.05
set ytics 0.1

set key box
set key left top
set grid

# plot
plot "y=2x.dat" with linespoints, "y=tanx.dat" with linespoints
