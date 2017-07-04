//switch program to print color//

#include<stdio.h>

int main()
{
   char color;
   printf("\nEnter color");
   scanf("%c",&color);
   switch(color)
{
  case 'R':printf("\nRed");
          break;
  case 'B':printf("\nBlue");
          break;
  case 'Y':printf("\nYellow");
          break;
  case 'G':printf("\nGreen");
          break;
  default :printf("\nInvalid color choice");
}

// printf("\nGood Bye");
}
