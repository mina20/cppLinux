#include<stdio.h>
main()
{
  int num,r,reverse=0;
  printf("Enter number");
  scanf("%d",&num);
  for(;num!=0;num=num/10)
  {
    r=num%10;
    reverse=reverse*10+r;
  }
   printf("Reverse num is:%d",reverse);
} 
