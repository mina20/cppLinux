#include<stdio.h>
  main()
  {
    int fact=1,n,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     fact=fact+fact*i;
    }
     printf("Factorial of number is:%d",fact);
  }
