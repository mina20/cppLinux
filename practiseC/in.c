//wap to calculate simple interest from the user take input from user and formula is s=(p*t*r)/100//
#include<stdio.h>
int main()
{
   float s,p,t,r;
   printf("\nEnter values of p t and r");
   scanf("%f %f %f",&p,&t,&r);
   printf("p=%f t=%f r=%f",p,t,r);
   s=(p*t*r)/100.0;
   printf("\nsimple interest s=%f",s);
}
