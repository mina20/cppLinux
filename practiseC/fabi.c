#include<stdio.h>
 int main()
  {
    int  r,i=0,j=1,k,f;
    printf("Enter the range");
    scanf("%d",&k);
    printf("%d %d",i,j);
    for(r=2;r<k;r++)
    {
      f=i+j;
      i=j;
      j=f;
      printf("\t%d",j);
   }
}  
