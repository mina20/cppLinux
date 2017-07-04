#include<stdio.h>
int main()
{
  int a[100],NUMBER,qutiont,rem,n,b,i=0,j;
  printf("enter number");
  scanf("%d",&n);
  printf("enter base no.");
  scanf("%d",&b);
  while(n!=0)
  {
   rem = n%b;
   qutiont = n/b;
   n=qutiont;
   a[i]=rem;
   i++;
  }
  for(j=i-1;j>=0;j--)
  {
   if(a[j]>=10)
     {
     a[j]=a[j]+55;
     printf("%c",a[j]);
     continue;
     }
  printf("%d",a[j]);
  }
printf("\n");
return 0;
}
