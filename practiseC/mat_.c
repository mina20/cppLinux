//mat addition//
#include<stdio.h>
main()
 {
    int r,c,i,j,A[4][4],B[4][4],C[4][4],k;
    printf("Enter no. of rows\n");
    scanf("%d",&r);
    printf("Enter no. of coloumn\n");
    scanf("%d",&c);
   printf("Enter element row wise\n");
    for(i=0;i<r;i++)
     {
       for(j=0;j<c;j++)
       {
         scanf("%d",&A[i][j]);
       }
    }
      printf("\n");
    for(i=0;i<r;i++)
     {
       for(j=0;j<c;j++)
        {
          printf("\t%d",A[i][j]);
        }
         printf("\n");
    }
      printf("Enter element of mat B:");
     for(i=0;i<r;i++)
      {
       for(j=0;j<c;j++)
        {
          scanf("%d",&B[i][j]);
        }
          printf("\n");
      }
            for(i=0;i<c;i++)
            {
              for(j=0;j<r;j++)

                {
                   printf("\t%d",B[i][j]);
                }
                 printf("\n");
             }
  
               for(i=0;i<r;i++)
                {
                  for(j=0;j<c;j++)
                   {
                      C[i][j]=C[i][j]+A[i][k]*B[k][j];
                   }
                }

                 printf("\n);
                 for(i=0;i<r;i++)
                 {
                    for(j=0;j<c;j++)
                      {

                         printf("\t%d",C[i][j]);
                       }
                         printf("\n");
                   }
}









          




      
    

