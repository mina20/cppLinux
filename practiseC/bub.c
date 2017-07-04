//program for sorting a numbers//


#include<stdio.h>
#include<math.h>
int main()


{
   int array[100],c,n,d,swap;
   printf("Enter number of element\n");
   scanf("%d",&n);
   printf("Enter integer %d",n);
   for(c=0;c,n;c++)
   {
     for(d=0;d<n-c-1;d++)
     {
       if(array[d]<array[d+1])
      {
        swap = array[d];
        array[d]=array[d+1];
        array[d+1]=swap;
       }
     }
   }
    printf("Sorted list in ascending order is \n");
    for(c=0;c<n;c++)
    printf("%d\n",array[c]);
    return 0;
}
