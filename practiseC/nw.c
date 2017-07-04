//program to count no. of lines in input//


#include<stdio.h>
int main()
{  
     int c1,nl;
     char c;
     printf("Enter your massage");
     scanf("%c",&c);
     nl = 0;
     while((c1=getchar())
     )if(c1=='\n')
     ++nl;
    printf("%d\n",nl);
}
