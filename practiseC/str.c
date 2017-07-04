#include<stdio.h>
#include<string.h>
void main()
   {
     char name[10][10],temp[10];
     int i,j,n;
     printf("Enter your string");
     for(i=0;i<10;i++){
     scanf("%s",name[i]);
     }
     n=strlen(name);
     for(i=0;i<n-1;i++)
     {
       for(j=i+1;j<n;j++)
        {
          if(strcmp(name[i],name[j])>0)
           {
             strcpy(temp,name[i]);
             strcpy(name[i],name[j]);
             strcpy(name[j],temp);
            }
         }
      } 
       printf("sorted string is");
       for(i=0;i<10;i++)
       printf("%s",name[i]);

}
  
