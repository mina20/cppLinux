/* Write a C program to print the input positive integer (less than 10 crores)
in words.*/


#include<stdio.h>
#include<string.h>
int res,res1,flag;
int tfig();
int ufig();
int main()
{	
	
	int i=0,a[9];
	long int rem,num,z,b=100000000;
	int qut;
	printf("Enter number : ");
	scanf("\n %ld",&num);
	z=num;
	if(z>100)
	{
		flag=1;
        } 
	for(i=0;i<9;i++)
	{
		rem=z%b;
		qut=z/b;
		a[i]=qut;
		z=rem;
		b=b/10;
	} 
	for(i=0;i<9;i++)
	{
		printf("%d",a[i]);
	}
	i=0;
	printf("\n");
	      
        res=(a[i]*10) ;
        if(res >=20 )
        {
		 tfig();
		 res1=a[i+1];
		 ufig();
		 printf(" crore,");
	}
	res1=(a[i]*10+a[i+1]) ;
	if(res1<=19 && res1>0) 
	{
        	ufig();
                printf(" crore,");
	}
	          
	res=(a[i+2]*10) ;
        if(res >=20 )
        {
		 tfig();
		 res1=a[i+3];
		 ufig();
		 printf(" lakh,");
	}
	res1=(a[i+2]*10+a[i+3]) ;
	if(res1<=19 && res1>0) 
	{
        	ufig();
        	printf(" lakh,");
	}
	     	
	res=(a[i+4]*10) ;
        if(res >=20 )
        {
		 tfig();
		 res1=a[i+5];
		 ufig();
		 printf(" thousand,");
	}
	res1=(a[i+4]*10+a[i+5]) ;
	if(res1<=19 && res1>0) 
	{
        	ufig();
        	printf(" thousand,");
	}
	
	res1=a[i+6];
	if(res1>0)
	{
	ufig();
	printf(" hundred  ");
	}
	
        res=(a[i+7]*10) ;
        if(res >=20 )
        {
		  if(flag==1)
		  {
		  	printf("& ");
		  }
		  tfig();
		  res1=a[i+8];
		  ufig();	
	}
	res1=(a[i+7]*10+a[i+8]) ;
	if(res1<=19 && res1>0) 
	{
		  if(flag==1)
		  {
		  	printf("& ");
		  }
        	  ufig();
       	}	    
	return 0;
}


int tfig()
{

        switch (res)
        {
        case 20:
                printf("twenty");
                break;
        case 30:
                printf("thirty");
                break;
        case 40:
                printf("fourty");
                break;
        case 50:
                printf("fifty");
                break;
        case 60:
                printf("sixty");
                break;
        case 70:
                printf("seventy");
                break;
        case 80:
                printf("eighty");
                break;
        case 90:
                printf("ninty");
                break;
        } 
	return 0;
}

int ufig()
{ 
        switch (res1) 
                   {
                     case 1:
                        printf("one");
                        break; 
                     case 2:
                        printf("two");
                        break;
                     case 3:
                        printf("three");
                        break; 
                     case 4:
                        printf("four");
                        break;   
                     case 5:
                        printf("five");
                        break; 
                     case 6:
                        printf("six");
                        break;    
                     case 7:
                        printf("seven");
                        break;   
                     case 8:
                        printf("eight");
                        break; 
                     case 9:
                        printf("nine");
                        break; 
                     case 10:
                        printf("ten");
                        break; 
                     case 11:
                        printf("eleven");
                        break; 
                     case 12:
                        printf("twelve");
                        break;
                     case 13:
                        printf("thirteen");
                        break; 
                     case 14:
                        printf("fourteen");
                        break;   
                     case 15:
                        printf("fifteen");
                        break; 
                     case 16:
                        printf("sixteen");
                        break;    
                     case 17:
                        printf("seventeen");
                        break;   
                     case 18:
                        printf("eighteen");
                        break; 
                     case 19:
                        printf("ninteen");
                        break;   
                  }
		  return 0;	
}


