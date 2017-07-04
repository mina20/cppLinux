#include<stdio.h>
#include <malloc.h>

int main()
{
  int x[30],y[30],array[30],n,temp;
  printf("Enter numbers");
  scanf("%d",&x);
 {
  for( x=0;x<n;x++)
  {
    for( y=0;y<n-1;y++)
    {
      if(array[y]<array[y+1]);
       {
           temp=array[y+1];
          array[y+1]=array[y];
          array[y]=temp;
         }
        }
     }
    }
}
