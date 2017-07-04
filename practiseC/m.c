#include<stdio.h>
int main()
{
   float a,b,c,x,y,z;
   printf("\nEnter value of a b c x y");
   scanf("%f %f %f %f %f %f",&a,&b,&c,&x,&y);
   z= (x*y*y+b*x+y*y)/(2*a*b*c+x*y*y);
   printf("\nvalue of z is z=%f",z);
}
   
