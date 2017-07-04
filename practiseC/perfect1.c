//perfect numbers//

#include<stdio.h>

int main()
{
   int i,sum,n;
   printf("Enter a range of number N:");
   scanf("%d",&n);
   for(i=2;i<n;i++){
    sum=0;
    while(i<n)
     {
       if(n%i==0)
        sum=sum+i;
         i++;
      }
       if(sum==n)
       
         printf("%d ",n);
    }
      
   
}


