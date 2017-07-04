## auther:-sameena shaikh cms1329.
## we define S=the number of susceptible persond at time t
## I= the number of infected individuals
## R= the number of recovered people at time t
#S= no of suceptable people
#m death rate of susceptable and recover=Birth rate of suceptible and infected 
#Equations are
#dS/dt=-bSI+aN-m*S
#dI/dt=bSI-gI+mI
#dR/dt=gI-mR
print("Enter values of s, i , r and n")

SIR<- function(s,i,r,n)
      {

S<- c()
R<- c()
I<- c()

N<- s+i+r
S[1]<- s
I[1]<- i
R[1]<- r 
h<- 1
B<-0.01
g<-0.05
m<-0.002
  for(i in 1:n/h)
  {
                S[i+1] <- S[i] - B*S[i]*I[i]*(h/N) + m*(N-S[i])*h
		I[i+1] <- I[i] + B*S[i]*I[i]*(h/N) - g*I[i]*h - m*I[i]
		R[i+1] <- R[i] + g*I[i]*h - m*R[i]*h
                      h<- h+1
  }
names = c('1/200','1/400','1/600','1/800','1/1000')
values= c(1/200,1/400,1/600,1/800,1/1000)

pdf("plots.pdf")

op <- par(mfrow=c(3,3))

for (i in 1:5) {
	for (j in 1:5) {
	op = sir(1,0, 0.4, 0.4, 0.2, 2000,values[i],values[j])
	plot(op[1,],type='l',ylim=c(0,1),col=c("blue"),main=paste("beta=",names[i],":k=",names[j]),xlab="days",ylab="fractions")
	lines(op[2,],col=c("red"))
	lines(op[3,],col=c("green"))
	legend("top",lwd=c(1,1,1),c("s","i","r"),col=c("blue","red","green"),horiz=TRUE,bg="white")
	}
}

dev.off()
