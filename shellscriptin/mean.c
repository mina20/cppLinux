// mean mediam mode//

#include<stdio.h>
#define k 20
int main()

  {
    int i,j,n,a[k],temp;
    float median,mode,avg,sum=0,m;
   printf("How many numbers you want to enter?");
   scanf("%d",&n);
   printf("Enter numbers");
   for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       printf("%d",a[i]);
    }
     for(i=0;i<=n;i++)
      
          sum=sum+a[i];
          avg=sum/n;
      printf("average of numbers is:%f",avg);
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
         if(n%2==0)
        {
        m=a[n/2]+a[(n/2+1)];
        median=m/2;
    
       } else
      median=a[n/2];
      
   printf("Median: %f ",median);
for(i=0;i<n;i++)
  mode=3*median-2*avg;
printf("Mode: %f",mode);



}
     

