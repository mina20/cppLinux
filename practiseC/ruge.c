//ruge kutta second order ODE programmin


#include<stdio.h>
   int main()
{
   float k1,k2,x0,yo,h,t,y,f;
yo=1;
t=0;
h=0.2;
y=y0;

for(t=0;t<=0.8;t=t+0.2);
{
   f = -2*t*y;
   k1 = h*f;
   k2=h*(-2)*(t+h/2)*(y+k1/2);
   y = y+k2;

printf("\tk1=%f",k1);
printf("\tk2=%f",k2);
printf("ty=%f\n",y);
}

}
