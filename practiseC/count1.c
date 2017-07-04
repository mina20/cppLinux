#include<stdio.h>
#include<string.h>
main()
{
  char l[150];
  int ch,s,sen,li,i,w;
  ch=s=sen=0,li=1;
  w=1;
  printf("Enter a string");
  gets(l);
  
  for(i=0;l[i]!='\0';i++)
   {
     if((l[i]>='a'&&l[i]<='z')||(l[i]>='A'&&l[i]<='Z'))
     {
      ch++;
      }
     else if(l[i]==' ')
     {
       s++;
       w++;
     } 
     else if(l[i]=='.')
    {
     sen++;
    }
     else if(l[i]=='\n')
     {
     li++;
     }
   }  
    printf("\nNo. of charecters are:%d",ch);
    printf("\nNo. of words are:%d",s);
    printf("\nNo. of sentences are:%d",sen);
    printf("\nNo. of spaces are:%d",s);
}
