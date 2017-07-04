#include<stdio.h>
#define size 50
int main()
{
  int a[size],rem,num,base,quo,i=0,j;
  printf("Enter decimal number\n");
  scanf("%d",&num);
  printf("Enter base\n");
  scanf("%d",&base);
  while(num!=0)
  {
    rem=num%base;
    quo=num/base;
    num=quo;
    a[i]=rem;
    i++;
  }
   for(j=i-1;j>=0;j--)
   {
     if(a[j]>=10)
     {
       a[j]=a[j]+55;
       printf("\n%c",a[j]);
       continue;
      }
       printf("\n%d",a[j]);
    }
} 
 
