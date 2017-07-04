


#include<stdio.h>
#include<string.h>


main()
{
   char arr[100];
   printf("C Program for Reversing a String\n\n");
   printf("Enter a string to reverse\n");
   gets(arr);

   strrev(arr);

   printf("Reverse of entered string is \n%s\n",arr);

   getch();
   return 0;
 }
               
