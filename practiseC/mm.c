#include<stdio.h>
#include<string.h>
main()
{
   char a[10][10],temp[10];
   int i,j,n;
   
   printf("Enter range of string");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%s",a[i]);
    }
     for(i=0;i<n-1;i++)
     {
       for(j=i+1;j<n;j++)
       {
         if(strcmp(a[i],a[j])>0)
          {
            strcpy(temp,a[i]);
             strcpy(a[i],a[j]);
             strcpy(a[j],temp);
           }
        }
      }
        printf("sorted string is\n");
        for(i=0;i<n;i++)
        {
          printf("%s\n",a[i]);
        }
}   




      









    






       
    
