#include<stdio.h>
#include<math.h>
int main()
 {
   float a,b,c,d1,d2,r,r1,r2;
   char i;
   printf("Enter coeff");
   scanf("%lf %lf %lf",&a,&b,&c);
   r=sqrt(b*b-4*a*c);
   if(r<0)
   {
     d1=-b/2*a;
     d2=r/2*a;
     
     
   }
    printf("Roots are %.2f+%.2fi %.2f-%.2fi",d1,d2,d1,d2);
}
