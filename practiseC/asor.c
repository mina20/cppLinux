//alpha sorting//


#include<stdio.h>
#include<string.h>
#define n 5
#define k 20

 main()

{
   char s[n][k],dummy[k];
   int i,j;
    printf("Enter names of  %d dtudent",n);
    for(i=0;i<n;i++)
    {
      scanf("%s",s[i]);
    }
 
  for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
       {
          if(strcmp(s[i],s[j])>0)
           {
             strcpy(dummy,s[i]);
             strcpy(s[i],s[j]);
             strcpy(s[j],dummy);
           }
      }
   }

 for(i=1;i<n;i++)
  {
    scanf(" %d %s",i,s[i]);
   }
for(i=1;i<n;i++)
 {
  printf(" %d %s\n",i,s[i]);
}
   return 0;
}
             
