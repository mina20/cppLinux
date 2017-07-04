#include<stdio.h>
#include<math.h>
int main()
{
   float h=0.1,y0=2.0,z0=1.0,k1,k1',k2,k2',k3,k3',k4,k4',k,k'
{
   k1=h*(x0+z0);
   k2=h*((x0+h/2.0)+(z0+k1/2.0));
   k3=h*((x0+h/2.0)+(z0+k2/2.0));
   k4=h*((x0+h)+(z0+k3));
   k=(k1+2.0*k2+2.0*k3+k4)/6.0;
   printf("t=%t\t",tmin);
   printf("k1=%f\t, k2=%f\t, k3=%f\t, k4=%f\t, k=%f\t",k1,k2,k3,k4,k);
   z=z0+k;
  z0=z0+1.0;
   k1'=h*(x0-y0*y0);
   k2'=h*((x0+h/2.0-(y0+k1'/2.0)*(y0+k1'/2.0));
   k3'=h*((x0+h/2.0-(y0+k2'/2.0)*(y0+k2'/2.0));
   k4'=h*((x0+h-(y0+k3')*(y0+k3');
   k'=(k1'+2.0*k2'+2.0*k3'+k4')/6.0;
   y=y0+k';
   y0=y0+2.0;
   printf("t=%t\t",tmin);
   printf("k1'=%f\t, k2'=%f\t, k3'=%f\t, k4'=%f\t, k=%f\t",k1',k2',k3',k4',k');
}
   
   
