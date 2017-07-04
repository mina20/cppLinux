//programe to identify triangle//

#include<stdio.h>
void  main()
{
   float x,y,z;
   printf("Enter sides of tringle x y and z");
   scanf("%f %f %f",&x,&y,&z);
   if(fabs(x+y)>fabs(z)||(fabs(y+z)>fabs(x)||fabs(z+x)>fabs(y)))
     {
       printf("Triangle is valid");
     }
      
        if (fabs(x*x)==fabs(y*y+z*z)||fabs(y*y)==fabs(x*x+z*z)||fabs(z*z)==fabs(y*y+x*x))
       {
        printf("\ntriangle is right angle triangle");
       }
       else if (fabs(x)==fabs(y)==fabs(z))
      {
      printf("\ntriangle is isoceles");
      }
      else if(fabs(x)==fabs(y)||fabs(y)==fabs(z)||fabs(z)==fabs(x))
      {
      printf("\ntriangle is equilateral");
      }
       else 
      {
        printf("tringle is invalid");
       }
}

