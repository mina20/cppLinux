
#include<stdio.h>

main()

   {
      int deci,bin[100],i=1,j,q;
      printf("Enter decimal number:");
       scanf("%d",&deci);
        while(deci!=0)
          q=deci;
           {
             bin[i++]=q%2;
             q=q/2;
            }
              printf("Binary number is:%d",deci);
              for(j=i-1;j>=0;j--)
               
                  printf("%d",bin[j]);
         }
