//wap to check weather the number is divisible by 3 and 5 or not//
#include<stdio.h>
int main()
{
  int a;
  printf("\nEnter a number");
  scanf("%d",&a);
  if((a%3)==0)
  {
  if((a%5)==0)
  {
   printf("\%d is devisible by 3 and 5",a);
  }
   else 
  {
   printf("%d id devisible by 3 and not by 5",a);
  }
 }
  else if((a%5)==0)
  {
   printf("%d is devisible by 5 and not by 3",a);
  }
  else
  {
  printf("%d is not divisible by 3 and 5",a);
  }
}
