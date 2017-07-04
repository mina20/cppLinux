//program to count no of lines words and charectors//

#include<stdio.h>
#include<string.h>

 main()
{
  char l[150];
  int v,c,d,s,i;
   v=c=d=s=0;
  printf("Enter string");
  gets(l);
  for(i=0;l[i]!='\0';i++)
  {
    if(l[i]=='a'||l[i]=='A'||l[i]=='o'||l[i]=='O'||l[i]=='e'||l[i]=='E'||l[i]=='u'||l[i]=='U'||l[i]=='i'||l[i]=='I')
        v++;
    else if((l[i]>='a'&&l[i]<='z')||(l[i]>='A'&&l[i]<='Z'))
             c++;
   else if(l[i]==' ')
            s++;
   else if(l[i]>='0'&&l[i]<='9')
           d++;
   }
    printf("\nNo. of vowels are:%d",v);
    printf("\nno. of consonant are:%d",c);
    printf("\nNo. of digit are:%d",d);
    printf("\nNo. of white spaces are:%d",s);
}
         
