
#include<stdio.h>

#define SIZE 50

int main()
{
  int num,base,quo,rem[SIZE],i = 0,j;
	
  printf("Enter the number ");
  scanf("%d",&num);
  printf("\nEnter the base ");
  scanf("%d",&base);
 	
  if(base <= 1)
  { 
    printf("\nInvalid Base");
  }	
  
  else
  {
    quo = num;
  	
    do
    {
      rem[i] = quo % base;
      quo = quo / base;
      i = i + 1;
    }while(quo != 0);
  }
  
  printf("%d representation in base %d system is ",num,base);
   
  for(j = i - 1;j >= 0;j--)
  {
    switch(rem[j])
    {
      case 10: 
	      printf("A");	
	      break;
		       
      case 11: 
	      printf("B");	
	      break;
		         
      case 12: 
	      printf("C");	
	      break;
		       
      case 13: 
	      printf("D");	
	      break;
		       
      case 14: 
	      printf("E");	
	      break;
		       
      case 15: 
	      printf("F");	
	      break;
		       
      default: 
	      printf("%d",rem[j]);	
	      break;		   		   		   		   		   	       
    }
  }
           
}        
      
  





