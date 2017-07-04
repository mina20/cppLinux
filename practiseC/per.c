#include<stdio.h>
main()
{
  int i,n,sum=0;
  printf("Enter a number");
  scanf("&d",&n);
   
   for(i=1;i<n;i++)
    {
     if(n%i==0)
      sum=sum+i;
    }
    
     if(sum==n)
     {
     printf("   is perfect number");
     }
     else
     printf(" is not perfect no.");
     
 
  
}
