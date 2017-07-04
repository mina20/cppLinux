#include<stdio.h>

#include<string.h>
void main()
{
  char st[20][5];
  int i,j,temp[20];
 
  printf("enter any string:");
  scanf("%s",st);
 
  /* sorting process */

  for(i=0;i<20;i++)
  {
    for(j=1;j<20;j++)
     {

            
            if(strlen(st[i])<strlen(st[j]))
            {
               temp=st[i];
                st[i] =st[j];
                st[j]=temp;
                }
           }
       }
   printf("Sorted string is \n");
   printf("%d\n",st[i]);
  
  }

