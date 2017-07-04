

#include<stdio.h>
 main()
   {
       char s[50],temp;
       int i,j,l;
        printf("Enter string");
        gets(s);
        i=0;j=0;
        l=strlen(s);
        j=l-1;
       while(i<j)
       {
          temp=s[i];
          s[i]=s[j];
          s[j]=temp;
          i++;
          j--;
       }
         printf("Reverse string is;%s",s);
           return 0;
}
