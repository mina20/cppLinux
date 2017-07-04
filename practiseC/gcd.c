
#include<stdio.h>
main()

 {
     int x,y,i,m;
     printf("Enter two numbers:");
     scanf("%d %d",&x,&y);
     if(x>y)
      m=x;
     else
    m=y;
   for(i=m;i>=1;i--)
    {
      if(x%i==0 && y%i==0)
       {
         printf("HCF of two number is:%d",i);
         break;
        }
   }
}
