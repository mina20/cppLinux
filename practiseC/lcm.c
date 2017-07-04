#include<stdio.h>

main()

{
  int a,b,i=1;
  printf("Enter two numbers");
  scanf("%d %d",&a,&b);
   for(;a!=b;i++)
     {
       if((a*i)%b==0)
       break;
      }
       printf("LCM of two number is: %d",a*i);
}
        


