trace<- function(A)
{
  if(is.square(A)==TRUE)
  {
  s<- sum(diag(A))
  return(s)
  }
  else
  {
   return(0)
}
}
