//wap for avg of 10 no. and display your name //
#include<stdio.h>
int main()
{
   
   float avg,sum=0;
   int i;
   int marks[30];
   for(i=0;i<=29;i++)
   {
    printf("\nEnter marks");
    scanf("%d",&marks[i]);
   }
   for(i=0;i<29;i++)
   sum=sum+marks[i];
   avg=sum/30;
   printf("\nAverage marks=%f",avg);
}
