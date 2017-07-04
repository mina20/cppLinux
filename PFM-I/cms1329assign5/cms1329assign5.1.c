/*Write structures to store coordinates of points in 3D space using Cartesian and Spherical Polar systems.
  Write functions to inter-convert the two types of coordinates. 
  Also, write functions to take two points as parameters and return the distance between them.*/

#include <stdio.h>
#include <math.h>
typedef struct polar_coordinates
{
	float x;
	float y;
	float z;
}polar;

typedef struct spherical_coodinates
{
	float r;
	float thita;
	float fi;
}spherical;

polar convert_to_spherical(polar p);
spherical convert_to_polar(spherical s);
void distance(float x1,float y1,float x2,float y2);

int main()
{
float x1,x2,y1,y2;
polar p;
spherical s;
printf("\nEnter polar co-ordinates:\n");
scanf("%f%f%f",&p.x,&p.y,&p.z);
convert_to_spherical(p);
printf("\nEnter sperical co-ordinates:\n");
scanf("%f%f%f",&s.r,&s.thita,&s.fi);
convert_to_polar(s);
printf("\nEnter x1,y1,x2,y2 to find the distance:\n");
scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
distance(x1,y1,x2,y2);
}

polar convert_to_spherical(polar p)
{
	float r,thita,fi;
	r=sqrt(p.x*2+p.y*2+p.z*2);
	thita=atan(sqrt(p.x*2+p.y*2)/p.z);
	fi=atan(p.y/p.x);
	printf("Conversion of polar co-ordinates into spherical is %f,%f,%f\n",r,thita,fi);
}

spherical convert_to_polar(spherical s)
{
	float x,y,z;
	x=s.r*sin(s.thita)*cos(s.fi);
	y=s.r*sin(s.thita)*sin(s.fi);
	z=s.r*cos(s.thita);
	printf("Conversion of spherical co-ordinates into polar is %f,%f,%f\n",x,y,z);	
}

void distance(float x1,float y1,float x2,float y2)
{
	float distance;
	distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("\nDistance between the points is: %f\n",distance);
}
	