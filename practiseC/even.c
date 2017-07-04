#include<stdio.h>

int main()
  {
    int n,i;
    printf("Enter a numbers");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
    if(n%i==0)
    
    printf("%d is not prim\n",n);
    
    else  
    printf("%d is prime\n",n);
    break;
   
  }
}
