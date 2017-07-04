#include<stdio.h>
main()
{
  int i,j,a[10][10];
  printf("Enter element");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      {
        scanf("%d",&a[i][j]);
      }
   }
    printf("\nA:\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
       {
         printf("%d\t",a[i][j]);
       }
        printf("\n");
    }
}
