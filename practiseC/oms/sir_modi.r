## auther:-sameena shaikh cms1329.
## we define S=the number of susceptible persond at time t
## I= the number of infected individuals
## R= the number of recovered people at time t
#S= no of suceptable people
#m death rate of susceptable and recover 
#n1 death rate of infected
#x probability of new born to be susceptible
#(1-x) probability of new born to be infected
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
a<-0.005
x<-1.0
m<-0.002

  for(i in 1:n/h)
  {
    S[i+1]<-S[i]-(((B*S[i]*I[i]/N)+(a*x*N)-(m*s[i]))*h)
    I[i+1]<-I[i]+(h*(((B*(S[i]*I[i]/N))-(g*I[i])+(a*(1-x)*N)-I[i])))
    R[i+1]<-R[i]+h*(g*I[i]-m*R[i])
         h<- h+1
  }

plot(S,ylim=c(min(c(S,I,R)),max(c(S,I,R))),type="l")
lines(I,col="blue")
lines(R,col="red")
legend("topright",c("susceptible people","Recover people","Infected people"),pch="____",col=c("black","red","blue"))



}




      
 
