/*
	
	Define two structures Point and Circle. Consider 2D space. Write func-
	tions for (1) accepting details of a circle from user (2) Accepting coordi-
	nates of a point P and (3) determining if the point P lies inside the cicle,
	on the circle or outside the circle and print the result accordingly.

*/

#include<stdio.h>
#include<math.h>


typedef struct circle
{
	float x;
	float y;
}circle;

typedef struct point
{
	float x1;
	float y1;
}point;

circle accept(circle c);
point accep_t(point p);
void check(circle c,point p);

int main()
{

float r;
circle c;
point p;

accept(c);
accep_t(p);
check(c,p);

return 0;
}

circle accept(circle c)
{

float r;
printf("\nEnter co-ordinates of circle:-");
scanf("%f%f",&c.x,&c.y);

r=sqrt(c.x*c.x+c.y*c.y);

printf("\nRadius of circle is %.2f\n",r);

printf("\nEquation of circle is %.2f^2+%.2f^2=%.2f^2\n",c.x,c.y,r);
}


point accep_t(point p)
{
	printf("\nEnter co-ordiantes of point:-");
	scanf("%f%f",&p.x1,&p.y1);
	printf("\nPoint is (%.2f,%.2f)\n",p.x1,p.y1);
}

void check(circle c,point p)
{
	float a,r;
	r=sqrt(c.x*c.x+c.y*c.y);
	a=sqrt(p.x1*p.x1+p.y1*p.y1);

	if(a<r)
	{
		    printf("\nPoint (%.2f,%.2f) is inside the circle\n",p.x1,p.y1);
	}
	else if(a==r)
	{
		    printf("\nPoint (%.2f,%.2f) is on the circle\n",p.x1,p.y1);
	}
	else
	{
		    printf("\nPoint (%.2f,%.2f) is outside circle",p.x1,p.y1);
	}

}	