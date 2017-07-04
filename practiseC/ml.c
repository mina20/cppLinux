//wap to print grade for student according their percentage //
#include<stdio.h>
int main()
{
  int percentage;
  printf("\nEnter your percentage");
  scanf("%d",&percentage);
  if(percentage>100||percentage<0)
   {
    printf("invalide percetage");
   }
   else if(percentage<100&&percentage>75)
    {
    printf("\nGrade A");
    }
    else if(percentage<75&&percentage>55)
    {
    printf("\nGrade B");
    }
    else if(percentage<55&&percentage>35)
    {
    printf("\nGrade C");
    }
    else
    {
     printf("\nFail");
    }
}
