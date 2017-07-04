#3 differential equations are:  dS/dt=-bSI
#				dI/dt=bSI-gI
#				dR/dt=gI
print("Give inputs to SIR functions as number of S,I,R and n(number of days) respectively")
SIR<-function(s,i,r,n){
S<-NULL
I<-NULL
R<-NULL
S[1]=s
I[1]=i
R[1]=r
dT=1
g=(1/500)
b=(1/300)
for(i in 1:n){
	S[i+1]=S[i]-(b*S[i]*I[i]*dT)
	I[i+1]=I[i]+(dT*(b*S[i]*I[i]-(g*I[i])))
	R[i+1]=R[i]+dT*g*I[i]
	}
plot(S,ylim=c(min(c(S,I,R)),max(c(S,I,R))),type="l")
lines(I,col="blue")
lines(R,col="red")
legend("topright", c("Susceptible people","Recoved people","Infected people"), pch="__",col=c("black","red","blue"))

}
