#include<stdio.h>

int main()
  {
    int a,b,i,m;
    int hcf,lcm;
    printf("Enter any two numbers");
    scanf("%d %d",&a,&b);
    if(a>b)
    m=a;
    else
    m=b;
   
   for(i=m;i>1;i--)
    {
     if(((a%i)==0) && ((b%i)==0))
     hcf=i;
     else
     hcf=1;
      
    }
     printf("hcf=%d",hcf);
     printf("lcm=%d",(a*b)/hcf);
    return 0;
  }
