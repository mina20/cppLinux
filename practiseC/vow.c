#include<stdio.h>
#include<string.h>
  main()
   {
      int v,s,c,d,i;
       v=s=c=d=0;
      char line[20];
      printf("Enter a string");
      scanf("%s",&line[i]);
      for(i=0;line[i]!='\0';i++)
      {
        if(line[i]=='a'||line[i]=='A'||line[i]=='u'||line[i]=='U'||line[i]=='o'||line[i]=='O'||line[i]=='i'||line[i]=='I'||line[i]=='e' 
        ||line[i]=='E' )
         {
           v++;
          }
         else if(line[i]>='a'||line[i]>='A'||line[i]<='z'||line[i]>='Z')  
                 {
                   c++;
                 }
          else if(line[i]=' ')
                 {
                   s++;
                  }
           else if(line[i]>=0||line[i]<=9)
                {
                  d++;
                }
         }
   }
