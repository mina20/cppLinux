#include<stdio.h>
#include<string.h>
char main()
  {
    char name[10][8],tname[10][8],temp[8];
     int i,j,n;
     printf("Enter how many names\n");
     scanf("%d",&n);
     printf("Enter %d names",n);
     for(i=0;i<n;i++)
     {
       scanf("%s",name[i]);
       
     }
      for(i=0;i<n-1;i++)
      {
       for(j=i+1;j<n;j++)
        {
          
          if(strlen(name[i])>strlen(name[j]))
           {
             strcpy(temp,name[i]);
            strcpy( name[i],name[j]);
             strcpy(name[j],temp);
         }
       }
    }
   
     printf("\n sorted names are\n");
     for(i=0;i<n;i++)
     {
       printf("%s\t\n",name[i]);
     }
} 
