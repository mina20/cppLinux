//Explicit Runge Kutta for fourth order.
//Find the numerical solution y at t=0.8 of the problem (y'= - 2 t y*y,  
//y(0)=1, h=0.2, t lies between 0 to 1) 

#include<stdio.h>
#include<math.h>
int main()
{
	float h=0.2,y=1.0,tmax=1.0,tmin=0.0,k1,k2,k3,k4,yanalytical;
		do
		{
                	k1=((0.2)*(-2.0)*(tmin)*y*y);
                	k2=h*(-2.0)*(tmin+(h/2.0))*(y+(k1/2.0))*(y+(k1/2.0));
                	k3=h*(-2.0)*(tmin+(h/2.0))*(y+(k2/2.0))*(y+(k2/2.0));
                	k4=h*(-2.0)*(tmin+h)*(y+k3)*(y+k3);
			printf("t = %f\t",tmin);
			printf("k1 = %f\t k2 = %f\t k3 = %f\t k4 = %f\t",k1,k2,k3,k4);
                	y=y+((1.0/8.0)*(k1+2.0*k2+2.0*k3+k4));
			tmin=tmin+0.2;
			yanalytical=1.0/(1.0+tmin*tmin);	
			printf("Analytical = %f\t",yanalytical);
                	printf("Numerical = %f\n",y);
                }while(tmin<0.8);

}
