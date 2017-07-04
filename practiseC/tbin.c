
#include<stdio.h>
#define size 50
 int main()
  {
    int num,quo,rem[size],base,i=0,j;
     printf("Enter Number\n");
      scanf("%d",&num);
     printf("Enter base\n");
     scanf("%d",&base);
       if(base<=1)
        {
         printf("Enter valid base");
        }
         else
        {
         quo=num;
        
         do
           {
             rem[i]=quo%base;
             quo=quo/base;
             i=i+1;
           } while(quo!=0);
         }
       
       for(i=i-1;i>=0;i--)
       printf("%d representation in binary is:",num,base);

  switch(rem[j])
  {
   case 10:printf("A");
           break;
   case 11:printf("B");
           break;
   default:printf("%d",rem[j]);
           break;
}
}     
  

