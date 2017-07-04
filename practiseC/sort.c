//program for sorting numbers//


#include<stdio.h>

int main()
  {
     int A[50],i,j,n,temp;
     char o;
     printf("Enter no. of element");
     scanf("%d",&n);
     printf("Enter numbers in array");
     for(i=0;i<n;i++)
    {
      scanf("%d",&A[i]);
     }
      printf("Your element are:");
       for(i=0;i<n;i++)
       {
         printf("\n%d",A[i]);
       }
        printf("\nEnter E for assending and D for desending sort");
        scanf("%s",&o); 
switch(o)
    {
      case'E':
              printf("\nNumbers in assending order are:%d\n",A[i]);
              for(i=0;i<n-1;i++)
              {
                for(j=i+1;j<n;j++)
 
                {
                    if(A[i]>A[j])
                     {
                       temp=A[i];
                        A[i]=A[j];
                        A[j]=temp;
                      }
                  }
                }
                 for(i=0;i<n;i++)
                 {
                   printf("%d\n",A[i]);
                 } 
                 
                 break;
     case'D':
                printf("\nNumbers in desending order are:%d\n",A[i]);
               for(i=0;i<n-1;i++)
               {
                 for(j=i+1;j<n;j++)
                 
                 {
                   if(A[i]<A[j])
                  {
                   temp=A[i];
                   A[i]=A[j];
                   A[j]=temp;
                  }
               }
              }
               for(i=0;i<n;i++)
                {
                  printf("%d\n",A[i]);
                } 

                   
              break;
 default:printf("Error please enter correct charecter");
         break;
    }
} 




   

                     







 
           











