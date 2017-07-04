//wap to print name and days of month using switch case//
#include<stdio.h>
int main()
{
 int month;
 printf("Enter month");
 scanf("%d",&month);
 switch(month)
  {
  case 1:printf("\nJanuary\n31 Days");
          break;
  case 2:printf("\nFaberuary\n28 Days");
          break;
  case 3:printf("\nMarch\n31 Days");
          break;
  case 4:printf("\nApril\n30 Days");
          break;
  case 5:printf("\nMay\n31 Days");
          break;
  case 6:printf("\nJune\n30 Days");
          break;
  case 7:printf("\nJuly\n31 Days");
          break;
  case 8:printf("\nAugust\n31 Days");
          break;
  case 9:printf("\nSeptember\n30 Days");
          break;
  case 10:printf("\nOctumber\n31 Days");
           break;
 case 11:printf("\nNovember\n30 Days");
          break;
 case 12:printf("\nDecember\n31 Days");
          break;
 default:printf("\nInvalid month choice");
 }

}

