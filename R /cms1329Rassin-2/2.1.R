

prime <- function(num)
{
	num <- as.integer(num)
	
	if(num > 1e6)
	{
		stop("n too large")
	}
	primes <- rep(TRUE, num)
	primes[1] <- FALSE
	last.prime <- 2L
	for(i in last.prime:floor(sqrt(num)))
	{
		primes[seq.int(2L*last.prime, num, last.prime)] <- FALSE
		last.prime<- last.prime + min(which(primes[(last.prime+1):num]))
	}
	which(primes)
}

