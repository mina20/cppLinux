# include<stdio.h>
 int main()
  {
     int i,j=2,a[30];
     
     
     for(i=100;i<999;i++)
     {
      a[i]=i+1;
     }
      printf("Three degit prime numbers are:");
     for(i=100;i<999;i++)
       {
       for(j=2;j<999;j++)
         {
           if(a[i]%j==0)
           break;
          }
             if(a[i]==j||a[i]==1)
           
             printf("%3d\n",a[i]);
            
      }
       return 0;
 }
             


