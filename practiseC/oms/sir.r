sir = function(h, t_init, S_init, I_init, R_init, N, beta, k) {
	S = S_init;
	I = I_init;
	R = R_init;
	
	n = S + I + R;
	
	for (i in 2:N) {
   	 S[i] = S[i-1] + h*(-beta*n*S[i-1]*I[i-1]);
	 I[i] = I[i-1] + h*(n*beta*S[i-1]*I[i-1] - k*I[i-1]);
    	 R[i] = R[i-1] + h*(k*I[i-1]);
	}
	op=rbind(S,I,R);
	return(op)
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
