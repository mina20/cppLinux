#include<string.h>
#include<stdio.h>

 main()
  {
    char s[20][20],temp[20];
    int i,j,n;
   printf("Enter no,");
   scanf("%d",&n);
   
   printf("Enter string: ");
  for(i=0;i<=21;i++)
      
     
      scanf("%s",s[i]);
      
     printf("The sorted string:");
    for(i=0;i<n;i++)
        {
       for(j=i+1;j<=n;j++)
          {
     
     
  
    if(strlen(s[i])>strlen(s[j]))
    {
      strcpy(temp,s[i]);
     strcpy( s[i],s[j]);
      strcpy(s[j],temp);
      }
   }
 }

   
  for(i=0;i<=n;i++)
   
     printf("\n%s\n",s[i]);
   

  }

    
       
      
   

