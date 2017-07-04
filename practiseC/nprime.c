#include<stdio.h>
int main()
 {
   int i,j,a[30];
   for(i=100;i<=999;i++)
    {
      a[i]=a[i]+1;
    }
     for(i=100;i<=999;i++)
      {
        for(j=2;j<999;j++)
         {
           if(a[i]%j==0)
            break;
          }
           if(a[i]==j||a[i]==1)
            printf("\n%3d",a[i]);
           }
        }
          return 0;
}  
