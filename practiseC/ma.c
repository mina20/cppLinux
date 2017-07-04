#include<stdio.h>
#include<math.h>
#define pi M_PI
int main()
  {
    int a,b,c,A,B,C,B1,C1,A1;
    printf("Enter all three sides of triangle");
    scanf("%d %d %d",&a,&b,&c);
    if(fabs(a+b)>fabs(c)&&fabs(a+c)>fabs(b)&&fabs(b+c)>fabs(a))
     {
       C1=acos((a*a+b*b+c*c)/2*a*b);
      
       A=A1*180/pi;
      
       printf("%d",C);
      }
      
   
    else
    printf("Invalid triangle");
}


