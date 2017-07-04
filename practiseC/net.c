#include <stdio.h>

void main()
{
  int countch=0;
  int countwd=1;

  printf("Enter your sentence in lowercase: ");
  char ch='a';
  while(ch!='\r')
  {
    ch=getche();
    if(ch==' ')
      countwd++;
    else
      countch++;
  }

  printf("\n Words = ",countwd);

  printf("Characters = ",countch-1);

  getch();

}
