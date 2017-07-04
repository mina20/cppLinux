    #include <stdio.h>
    #include <stdlib.h>
    main()
    {
    char a[30][10];
    int i,j,n,temp,l1,l2;
    printf("enter the limit: ");
    scanf("%d",n);
    printf("enter the string: ");
    for(i=0;i<n;i++)
      {
        for(t=0;t<10;t++)
        {
           scanf("%s",a[i]);
        }
     }
    for(i=0;i<n-1;i++)
    {
    for(j=i+1;j<n;j++)
    {
      l1=strlen(a[i]);
      l2=strlen(a[j]);
    if(l1>l2)
    {
    temp=a[j];
    a[i]=a[j];
    a[j]=a[i];
    }
    }
    }
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
    }
    }
