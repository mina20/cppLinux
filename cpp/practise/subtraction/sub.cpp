#include<iostream>
#include"sub.h"

using namespace std;
 

/*  class Sum
  {
     int a,b,add,sub,div,mul;
    
     public:

     void getdata(void);
     void putdata(void);

   };*/
   
  void Sum::getdata()
  {
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
  }

  void Sum::putdata()
   {
      add=a+b;
      sub=a-b;
      mul=a*b; 
      div=b/a;
     cout<<a<<"+"<<b<<"="<<add<<endl;
     cout<<a<<"-"<<b<<"="<<sub<<endl;
     cout<<a<<"*"<<b<<"="<<mul<<endl;
     cout<<b<<"/"<<a<<"="<<div<<endl;
   }

 

  


