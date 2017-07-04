//sorting strings//
#include<stdio.h>
#include<string.h>

 main()
  {
    char s[20][20],temp[20];
    int i,j,n;
    
    printf("Enter name of student with date of birth:");
   
    
     
      scanf("%s",s[i]);
      n=strlen(s);
       for(i=1;i<=n;i++)
          {       
          for(j=i+1;j<=n-1;j++)
            {
               if(strcmp(s[i],s[j])>0)
                  {
                     strcpy(temp,s[i]);
                     strcpy(s[i],s[j]);
                     strcpy(s[j],s[i]);
                   }
             }
        
                 printf("Alloted roll number are:");
                 for(i=1;i<=n;i++)
                  printf("\n%d %s",i,s);
  }
}

