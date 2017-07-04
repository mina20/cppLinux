x=iris
x=x[1:100,]
x=x[,c(1,2,5)]
set.seed(123)
i=sample(nrow(x),floor(0.7*nrow(x)))

tra=x[i,-3]
tes=x[-i,-3]
y=iris[1:100,]
tralab=y[i,5]
tralab=y[-i,5]
data1=rbind(tes[1,],tra)
d= dist(rbind(tes[,1],tra[,1]),method="euclidean")
d=as.matrix(d)
#D<-cbind(d,x[i,3])
order(d[,1])
s=sort(d[2,])
s1=s[-1]
s1=s1[1:3]
s2=order(s1)

