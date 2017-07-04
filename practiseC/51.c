/* Write structures to store coordinates of points in 3D space using Carte-
 * sian and Spherical Polar systems. Write functions to inter-convert the two
 * types of coordinates. Also, write functions to take two points as parame-
 * ters and return the distance between them.*/

#include<stdio.h>
#include<math.h>

struct Cartesian
{
  float x[3];
  float y[3];
  float z[3];
};

struct Polar
{
  float r[3];
  float theta[3];
  float phi[3];
};

void convert2polar(struct Cartesian cart)
{
	float r,theta,phi;
	
	r = sqrt(cart.x[0] * cart.x[0] + cart.y[0] * cart.y[0] + cart.z[0] * cart.z[0]);
	theta = atan(sqrt(cart.x[0] * cart.x[0] + cart.y[0] * cart.y[0]) / cart.z[0]);
	phi = atan(cart.y[0] / cart.x[0]);
	
	printf("r = %f\ttheta = %f\tphi = %f\n",r,theta,phi);
}

void convert2cartesian(struct Polar pol)
{
	float x,y,z;
	
	x = pol.r[0] * sin(pol.theta[0]) * cos(pol.phi[0]);
	y = pol.r[0] * sin(pol.theta[0]) * sin(pol.phi[0]);
	z = pol.r[0] * cos(pol.theta[0]);
	
	printf("x = %f\ty = %f\tz = %f\n",x,y,z);
}

void distance_cartesian(struct Cartesian cart)
{
  float dist;
  
  dist = sqrt((cart.x[0] - cart.x[1]) * (cart.x[0] - cart.x[1]) + (cart.y[0] - cart.y[1]) * (cart.y[0] - cart.y[1]) + (cart.z[0] - cart.z[1]) * (cart.z[0] - cart.z[1]));
  
  printf("\nDistance = %f\n",dist);
}

void distance_polar(struct Polar pol)
{
  float dist,term1,term2,term3,term4;
  
  term1 = pol.r[0] * pol.r[0] + pol.r[1] * pol.r[1];
  term2 = 2 * pol.r[0] * pol.r[1];
  term3 = sin(pol.theta[0]) * sin(pol.theta[1]) * (cos(pol.phi[0]) * cos(pol.phi[1]) + sin(pol.phi[0]) * sin(pol.phi[1]));
  term4 = cos(pol.theta[0]) * cos(pol.theta[1]);
  
  dist = sqrt(term1 - term2 * (term3 + term4));
  
  printf("\nDistance = %f\n",dist);
}

int main()
{
  struct Cartesian cart;
  struct Polar pol;
  
  unsigned short ch;
  
  printf("1. Convert Cartesian co-ordinates to Polar co-ordinates\n2. Convert Polar co-ordinates to Cartesian co-ordinates\n");
  printf("3. Find distance between two points in Cartesian system\n4. Find distance between two points in Polar system\n");
  printf("Enter your choice\n");
  scanf("%hu",&ch);
  
  switch(ch)
  {
  	case 1: 
	        printf("Enter Cartesion co-ordinates of point\n");
  	        scanf("%f %f %f",&cart.x[0],&cart.y[0],&cart.z[0]);
	        convert2polar(cart);
  		    break;
  		    
  	case 2: 
  	        printf("Enter Polar co-ordinates of point\n");
  	        scanf("%f %f %f",&pol.r[0],&pol.theta[0],&pol.phi[0]);
	        convert2cartesian(pol);
  		    break;
	
	case 3: 
	        printf("Enter Cartesion co-ordinates of point 1\n");
  	        scanf("%f %f %f",&cart.x[0],&cart.y[0],&cart.z[0]);
  	        printf("Enter Cartesion co-ordinates of point 2\n");
  	        scanf("%f %f %f",&cart.x[1],&cart.y[1],&cart.z[1]);
	        distance_cartesian(cart);
  		    break;
	
	case 4: 
	        printf("Enter Polar co-ordinates of point 1\n");
  	        scanf("%f %f %f",&pol.r[0],&pol.theta[0],&pol.phi[0]);
  	        printf("Enter Polar co-ordinates of point 2\n");
  	        scanf("%f %f %f",&pol.r[1],&pol.theta[1],&pol.phi[1]);
	        distance_polar(pol);
  		    break;
			  
	default: printf("Invalid Choice\n");
	         break;		  		  		  	    
  }
  
//  return 0;
}

