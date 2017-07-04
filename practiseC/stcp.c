
#include<stdio.h>
#include<string.h>
#define n 4
  main()
  {
    char s[10][10],s1[3],s2[3],s3[5],s4[7],s5[8],s6[20];
    int i,j;
    printf("Enter name of student");
    for(i=1;i<=n;i++)
     scanf("%s",s[i]);
      printf("\nEnter date of birth");
      printf("Enter day first:");
      scanf("%s",s1);
      printf("Enter month in mm form");
      scanf("%s",s2);
      printf("Enter year in yyyy form");
       scanf("%s",s3);
        strcpy(s1,s2);
        
      printf("your input :");
       scanf("%s",s6);
}
    

