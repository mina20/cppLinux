//wap to calculate discriminant and cllsify all in required curve//

#include<stdio.h>

int main()
{
   int a,b,h,g,f,c,det;
   printf("\nEnter values of a b c h g & f");
   scanf("%d %d %d %d %d %d",&a,&b,&c,&h,&g,&f);
   det=(a*(b*c-f*f)-h*(h*c-f*g)+g*(h*f-b*g));
   printf("\nDescriminant del=%d",det);
   if(det!=0)
   {
   	if( a*b-h*h>0)
     	{
     		printf("Given equation represent ellipse");
     	}
	else if(a*b-h*h==0)
     	{
     		printf("Given equation represent parabola");
        }
	else (a*a-h*h<0);
     	{
        	printf("Given equation represent hyperbola");
     	}
  }
  else
  {
      	if(a*b-h*h>0)
     	{
      		printf("Equation represent two imaginary lines");
     	}
      	else if(a*b-h*h==0)
     	{
     		printf("Equation represent two real parallel lines");
     	}
     	else (a*a-h*h<0);
     	{
     		printf("Equation represent two real intersecting lines");
     	}
  } 
}
    
