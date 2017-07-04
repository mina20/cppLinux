#include<stdio.h>
#include<string.h>
main()
{
  char a[10][10],temp[10];
  int i,j,n;
  printf("Enter how lenght of string");
  scanf("%d",&n);
  printf("Enter a string");
  for(i=0;i<n;i++)
  {
  scanf("%s",a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++) 
     {
       if(strlen(a[i])>strlen(a[j]))
         {
           strcpy(temp,a[i]);
           strcpy(a[i],a[j]);
           strcpy(a[j],temp);
         }
      }
    }
          printf("\nresult is:\n");
          for(i=0;i<n;i++)
          {
            printf("%s\n",a[i]);
          }
} 
  
