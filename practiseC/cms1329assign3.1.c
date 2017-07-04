//	
	Assignment 5_1

	Write structures to store coordinates of points in 3D space using Carte-
	sian and Spherical Polar systems. Write functions to inter-convert the two
	types of coordinates. Also, write functions to take two points as parame-
	ters and written the distance between them.
//

#include<stdio.h>
#include<math.h>


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

	printf("\nEnter polar co-ordinates:-");
	scanf("%f%f%f",&p.x,&p.y,&p.z);
	printf("\nPolar co-ordinates are (%.2f,%.2f,%.2f)\n",p.x,p.y,p.z);

	convert_to_spherical(p);

	printf("\nEnter sperical co-ordinates:-");
	scanf("%f%f%f",&s.r,&s.thita,&s.fi);
	printf("\nSpherical co-ordinates are (%.2f,%.2f,%.2f)",s.r,s.thita,s.fi);

	convert_to_polar(s);

	printf("\nEnter x1,y1,x2,y2-");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);

	distance(x1,y1,x2,y2);

}

polar convert_to_spherical(polar p)
{
	float a,r,thita,fi;
	a=(p.x*2+p.y*2+p.z*2);
	r=sqrt(a);
	thita=atan(sqrt(p.x*2+p.y*2)/p.z);
	//thita=thita*180/3.142;
	fi=atan(p.y/p.x);
	//fi=fi*180/3.142;
	printf("Conversion of polar co-ordinates (%.2f,%.2f,%.2f) into spherical is (%.2f,%.2f,%.2f)\n",p.x,p.y,p.z,r,thita,fi);
}

spherical convert_to_polar(spherical s)
{
	float x,y,z;
	x=s.r*sin(s.thita)*cos(s.fi);
	y=s.r*sin(s.thita)*sin(s.fi);
	z=s.r*cos(s.thita);
	printf("Conversion of spherical co-ordinates (%.2f,%.2f,%.2f) into polar is (%.2f,%.2f,%.2f)\n",s.r,s.thita,s.fi,x,y,z);	
}

void distance(float x1,float y1,float x2,float y2)
{
	float c,d,e;
	d=(x2-x1)*(x2-x1);
	e=(y2-y1)*(y2-y1);
	c=sqrt(d+e);
	printf("\nDistance between (%.2f,%.2f,%.2f,%.2f) is %.2f\n",x1,y1,x2,y2,c);
}
	
