/* WAP to determine the type of a triangle. */

#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c;
	printf("Enter the three sides of a triangle: ");
	scanf("%f %f %f",&a,&b,&c);
	if((a+b>c) && (a+c>b) && (b+c>a))
	{
		printf("Triangle can be formed..valid sides..\n");
		if((a*a + b*b)> c*c) 
	        {
               		printf("It is a Acute angled triangle...\n");
			if((fabs(a-b)<pow(10,-6)) && (fabs(b-c)<pow(10,-6)))
			{
				printf("Triangle is Equilateral...\n");		
			}
			else if((fabs(a-b)<pow(10,-6)) || (fabs(b-c)<pow(10,-6)) || (fabs(a-c)<pow(10,-6)))
			{	
				printf("triangle is Isosceles...\n");
			}
			else
			{
				printf("Triangle is Scelene...\n");
			}
		}       
        	else if(fabs(a*a + b*b - c*c)< pow(10,-6))
      		{
            	  	printf("It is a Right angled triangle..\n");
      		}
      		else
      		{
                	printf("It is Obtuse angled triangle..\n");
        	}
	}
        else
        {
                printf("Triangle can not be formed..invalid sides..\n");
        }
	return 0;
}


