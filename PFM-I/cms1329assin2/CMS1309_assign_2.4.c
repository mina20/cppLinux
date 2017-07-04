
// WAP to convert a character from Lowercase to Uppercase and vice-versa.//

#include<stdio.h>
int main()
{
	char z,i,x;
	printf("Enter any character: \n");
	for(i=1;i<100;i++)
	{
		scanf("%c",&z);
		if(z>='a' && z<='z')
		{
			x=z-32;
        		printf("Character in Uppercase-->%c\n",x);
		}
		else if(z>='A' && z<='Z')
		{
        		x=z+32;
        		printf("Character in Lowercase--> %c\n",x);
		}
		else if(z=='\n')
		{
        		printf("Enter any character:\n");
     		}
		else
		{
        		printf("Invalid character\n");
        		i=0;
       	 		break;
      		}
    	}
}


