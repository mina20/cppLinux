
#include<stdio.h>

void main()
 {
   int i,j,r,c,k,a[5][5],b[5][5],d[5][5];
   printf("Enter no. of rows");
   scanf("%d",&r);
   printf("Enter no. of coloumn");
   scanf("%d",&c);
   printf("\nEnter element of first matrix\n");
   
   for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
       {
         scanf("%d",&a[i][j]);
       }
     }
      printf("A:\n");
      for(i=0;i<r;i++)
       {
         for(j=0;j<c;j++)
          {
            printf("%d\t",a[i][j]);
          }
            printf("\n");
       }   
        printf("Enter element of mat.B");

       for(i=0;i<r;i++)
       {
        for(j=0;j<c;j++)
         {
           scanf("%d",&b[i][j]);
          }
        }
          printf("B:\n");
          for(i=0;i<r;i++)
          {
            for(j=0;j<c;j++)
             {
               printf("%d\t",b[i][j]);
              }
                printf("\n");
           }  
            for(i=0;i<r;i++)
            {
               for(j=0;j<c;j++)
                {
                  d[i][j]=0;
                  for(k=0;k<r;k++)
                  {
                  d[i][j]=d[i][j]+a[i][k]*b[k][j];
                  }
                }
              }
                  printf("Multi. of above mat is:\n");
                  for(i=0;i<r;i++)
                   {
                    for(j=0;j<c;j++)
                     {
                       printf("%d\t",d[i][j]);
                      }
                        printf("\n");
                    }
}






 
             









      






 

               


