//programe to print histogram for required class//

#include<stdio.h>
int main()
 {
   int i,k;
   printf("Enter test marks of student");
   scanf("%d",&k);
   int arr[k];
   for(i=0;i<k;i++)
   {
    scanf("%d",&arr[i]);
    }
     printf("0 - 9|");
     for(i=0;i<k;i++)
     {
       if(arr[i]>=0 && arr[i]<=9)
        {
         printf("*");
         }
      }
printf("\n10-19|");
for(i=0;i<k;i++)
{
   if(arr[i]>=10 &&arr[k]<=19)
   {
    printf("*");
    }
 }
printf("\n20-29|");
for(i=0;i<k;i++)
{
  if(arr[i]>=20 &&arr[i]<=29)
  {
   printf("*");
  }
}
printf("\n30-39|");
for(i=0;i<k;i++)
{
  if(arr[i]>=30 &&arr[i]<=39)
   {
    printf("*");
   }
}
printf("\n40-49|");
for(i=0;i<k;i++)
{
  if(arr[i]>=40 && arr[i]<=49)
   {
   printf("*");
   }
}
printf("\n50-59|");
for(i=0;i<k;i++)
{
  if(arr[i]>=50 && arr[i]<=59)
   {
   printf("*");
   }
}
printf("\n60-69|");
for(i=0;i<k;i++)
{
  if(arr[i]>=60&&arr[i]<=69)
   {
    printf("*");
    }
}
printf("\n70-79|");
for(i=0;i<k;i++)
{
  if(arr[i]>=70 && arr[i]<=79)
  {
   printf("*");
   }
}
printf("\n80-89|");
for(i=0;i<k;i++)
  {
   if(arr[i]>=80 && arr[i]<=89)
   {
   printf("*");
   }
 }
printf("\n90-99|");
for(i=0;i<k;i++)
   {
    if(arr[i]>=90 && arr[i]<=99)
    {
    printf("*");
    }
   }
printf("\n100|");
for(i=0;i<k;i++)
{
   if(arr[i]==100)
   {
   printf("*");
   }
}
printf("\n");
return 0;
}













































































   
