
library(plotrix)

#saving R graphics output in pdf format

#function tom draw polar plot and taking r and thita and input vector from user

#polar.plot first argument data vector(r),then (thita),start=90,clockwise=TRUE,rp.type="s"(thatis=symbols,....)
polar_plot=function(r,thita)
{
	polar.plot(r,thita,start=90,clockwise=TRUE,rp.type="s",
	point.symbols=19,radial.lim=c(0,5),boxed.radial=FALSE, 
	show.grid.labels=2)
}


