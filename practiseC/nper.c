#include<stdio.h>

 void  main()
  {
     int n,i=1,sum=0,j;

    
        printf("Perfect no. in range are:");     
       for(n=1;n<=100;n++)
         {
            i=1;
           sum=0;
          while(i<n)
          {
           if(n%i==0)
           
             sum=sum+i;
             i=i+1;
           }
           if(sum==n)
           printf("%d\n",n);
        }
    }








