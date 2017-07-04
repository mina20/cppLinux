
 #include<stdio.h>
 #include<string.h>
 #define size 50
  main()
   {
      char str[size];
      char *p;
      int lines=1,words=1,characters=0,sentenses=0,end=0;
       printf("Enter string");
       gets(str);
      
      {
       while(p=gets(str)!='\n')
       
        {
         while(p=gets(str)!='.')
          {
           while(
           characters++;
    switch(*p)
     {
       case' ':words++;
               break;
       case'.':sentenses++;
               break;
       
       case'\n':lines++;
                break;
        default:
                 break;
   }
  }
}
    printf("No of characters:%hd",characters);
    printf("No of words:%hd",words);
    printf("No of sentenses:%hd",sentenses);
    printf("No of lines:%hd",lines);
}

