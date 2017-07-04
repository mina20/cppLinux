//binomial coeffecient//

#include<stdio.h>
 
main()
 {
   int i,k,c;
   printf("Enter value of k");
   scanf("%d",&k);
     c=1;
  for(i=0;i<=k;i++)
   {
     printf("%3d",c);
     c=c*(k-i)/(i+1);
   } 
  
}

   
    



