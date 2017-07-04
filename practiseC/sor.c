#include<stdio.h>
#define N 30

  void main()
   {
       char o;
      int n,i,j,a[N],temp;
      printf("how much numbers?");
      scanf("%d",&n);
      printf("Enter numbers");
      for(i=0;i<n;i++)
       {
         scanf("%d",&a[i]);
        }
      printf("Enter choice A for asending D for desending");
      scanf("%s",&o);

     for(i=0;i<n;i++)
     {
       for(j=i+1;j<n;j++)
        {
          if(a[i]<a[j])
           {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
         }
      }
      switch(o)
     {
       case'D': printf("sorted numbers are: ");
       for(i=0;i<n;i++)
       {
       printf("%d ",a[i]);
       }
       break;
      case'A':printf("sorted numbers are: ");
       for(i=n;i>=0;i--)
       {
       printf("%d ",a[i]);
       }
      break;
    default:printf("Enter right choise");
  }
}         

