
 // WAP to generate Pascal’s triangle and print it in the form of a pyramid.// 


#include <stdio.h>
int main()
{
	int n, x, i, c, j;
	printf("Enter no of rows: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		c=1;
		for(j=0;j<n-i;j++)
		{
			printf("%3s", " ");
		}
		for (x=0;x<=i;x++)
		{
			printf("   %3d ",c);
			c=c*(i-x)/(x+1);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}



