#include<stdio.h>
#include<string.h>
 main()
  {
    char s[10];
    int l,i;
    printf("Enter string");
    gets(s);
     l=strlen(s);
     printf("Reverse string is:");
     for(i=l-1;i>=0;i--)
       
         printf("reverse string is:%s",s);
        
       return 0;
   }
