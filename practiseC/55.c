#include<stdio.h>
int main()
{
   int num=1234,rev=0;
   printf("Enter a number to reverse");
   scanf("%d",&num);
   while(num>0)
   {
    rev=10*rev+num%10;
    num=num/10;
  }
   printf("reverse number is %d",&rev);
   getch();
}
