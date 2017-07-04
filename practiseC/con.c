//program to convert number into binary octal hexa decimal from decimal//


#include<stdio.h>
 int main()
  {
    int num,base;
    printf("Enter number in decimal");
    scanf("%d",&num);
    printf("Enter base");
    scanf("%d",&base);
    void dec_to_bin(int n)
    {
      int bin[60],i=0,length=0;
      while(n!=0)
      {
        bin[i]=n%2;
        n=n/2;
        i++;
        length++;
        }
        for(i=length-1;i>0;i--)
        {
         printf("%d",&bin[i]);
        }
        printf("\n");
      }
 
     void dec_to_oct(int n)
     {
      int oct[60],i=0,length=0;
    
      while (n!=0)
      {
        oct[i]=n%8;
            n=n/8;
            i++;
            length++;
        }
        for (i=length-1;i>0;i--)
        {
         printf("%d",&oct[i]);
        }
     }

    void dec_to_hexdec(int n)
    {
      int hex[60],i=0,length=0;
      while (n!=0)
      {
       hex[i]=n%16;
           n=n/16;
           i++;
           length++;
        }
         for (i=length-1;i>0;i--)
         {
          switch(hex[i])
          {
            case 10:printf("A");
                    break;
            case 11:printf("B");
                    break;
            case 12:printf("C");
                    break;
            case 13:printf("D");
                    break;
            case 14:printf("E");
                    break;
            case 15:printf("F");
                    break;
            default:printf("%d",hex[i]);
                    break;
             }
           }
         }
          switch(base)
          {
             case 2:printf("Binary number is ");
                    dec_to_bin(num);
                    break;
             case 8:printf("Octal number is ");
                    dec_to_oct(num);
                    break;
             case 16:printf("Hexadecimal number is ");
                     dec_to_hexdec(num);
                     break;
             case 10:printf("%d",&num);
                     break;
             default:printf("Invalid base");
                     break;
           }
  
  }



















    
