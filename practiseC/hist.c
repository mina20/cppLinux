#include<stdio.h>
#define size 50
int main()
  {
    int i,j,k;
    printf("how many student");
    scanf("%d",&k);
    int arr[k];
    printf("Enter marks of student");
    for(i=0;i<k;i++)
    {
      scanf("%d",&arr[i]);
    }
     printf("0-9|");
     for(i=0;i<k;i++)
     {
      if(arr[i]>=0&&arr[i]<=9)
      {
        printf("*");
      }
     }
      printf("\n10-19|");
      for(i=0;i<k;i++)
      {
       if(arr[i]>=10 && arr[i]<=19)
        {
           printf("*");
        }
       }
        printf("\n20-29|");
        for(i=0;i<k;i++)
        {
          if(arr[i]>=20&&arr[i]<=29)
           {
             printf("*");
           }
         }
   }    
  
   

