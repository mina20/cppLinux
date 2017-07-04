
// Compute sin(x) using the library function. Also compute it by summing a finite number of terms of an infinite series for sin(x).The program should print a table with each row showing value of x, value of sin(x) using library function and the minimum number of terms of series in the sum required to get accuracy of 10−3 or better. Do this for at least 10 values of x ∈ [ −π/6 , π/6 ].
//

#include<stdio.h>
#include<math.h>

int main()
{
	float x[20],x1[20],sina,sum=0,y=0,n=1,d,acc;
	int z,i;
	printf("\nHow many values user want to enter:");
	scanf("%d",&z);
	for(i=0;i<z;i++)
	{
		printf("\nEnter value for x[-30<=x<=30]:-");
		scanf("%f",&x[i]);
		x1[i]=x[i]*(M_PI/180);
		sina=sin(x1[i]);
		sum=x1[i];
		y=x1[i];
		do
		{
			d=2*n*(2*n+1);
			y=(-y)*(x1[i]*x1[i])/d;
			sum=sum+y;
			n=n+1;
		}while(n!=100 && y>=0.00001);
		printf("Sum is:-%f \t function is:-%f\n",sum,sina);
	}
	return 0;
}


