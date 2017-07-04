

#include<stdio.h>

main()
{
   int i=1,n,sum=0,j;
   printf("Enter range N:");
   scanf("%d",&n);
   printf("perfect number in given range : ");
   for(j=1;j<n;j++)
   {
     while(i<j)
      {
         if(j%i==0)
          sum=sum+i;
          i++;
     }
       if(sum==j)
       printf("%d",j);
 }
}

