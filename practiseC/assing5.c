// Define two structures Point and Circle. Consider 2D space. Write func-
  tions for (1) accepting details of a circle from user (2) Accepting coordi-
  nates of a point P and (3) determining if the point P lies inside the cicle,
  on the circle or outside the circle and print the result accordingly.//

#include<stdio.h>
#include<math.h>

struct Point
{
  float x;
  float y;
};

struct Circle
{
  float origin_x;
  float origin_y;
  float radius;
};

void check(struct Point pt,struct Circle cir)
{
  float lhs, rhs, eps = 1.0e-5;

  // P = (x,y) & O(a,b)
  // (x - a)^2 + (y - b)^2 = r^2
  //          lhs            rhs
  
  lhs = fabs((pt.x - cir.origin_x) * (pt.x - cir.origin_x) + (pt.y - cir.origin_y) * (pt.y - cir.origin_y));
  rhs = fabs(cir.radius * cir.radius);

  if(fabs((lhs - rhs)) < eps)                              // lhs = rhs => On the circle
  {
    printf("The point lies on the circle\n");
  }
  
  else if((lhs - rhs) < 0.0)                               // lhs < rhs => Inside the circle
  {
    printf("The point lies inside the circle\n");
  }

  else                                                     // lhs > rhs => Outside the circle
  {
    printf("The point lies outside the circle\n");
  }
}

int main()
{
  struct Point pt;
  struct Circle cir;

  printf("Enter the co-ordinates of the origin and the radius of circle\n");
  scanf("%f %f %f",&cir.origin_x,&cir.origin_y,&cir.radius);

  printf("Enter the x and y co-ordinates of point\n");
  scanf("%f %f",&pt.x,&pt.y);

  check(pt,cir);
  
//  return 0;
}
