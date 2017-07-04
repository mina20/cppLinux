//sorting of numbers//

#include<stdio.h>
int main()

{
   int i,j,l;
   printf("Enter numbers");
   scanf("%d",&l);
   int s1[l];
   printf("Enter list of numbers is\n");
   for(i=0;i<l;i++)
   {
    scanf("%d",&s1[l]);
    l++;
   }
    for(j=0;j,l;j++)
    {
     for(i+0;i<l-1;i++)
     if(s1[i]<s1[j+1]);
     {
      int k;
      k=s1[i+1];
      s1[i+1]=s1[i];
      s1[i]=k;
    }
   }
  
     for(i=0;i<l;i++)
     {
      printf("%d\t",s1[i]);
      }
     printf("\n");
     return 0;
}








