op<-par(mfrow=c(2,2))
m<-10000
for(i in 1:4)
{
n=10^i
lambda.hat<-NULL
for(j in 1:m)
{
x<-rexp(n,1)
lambda.hat<-c(lambda.hat,mean(x))
}
hist(lambda.hat,breaks='FD')
}
par(op)
