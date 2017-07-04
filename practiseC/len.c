//to count length of string//

#include<stdio.h>
#include<string.h>

int main()
{
   char a[50];
   int length;
   printf("Enter a string to calculate its length\n");
   gets(a);
   length =strlen(a);
   printf("Length of entered string is = %d\n",length);
}
