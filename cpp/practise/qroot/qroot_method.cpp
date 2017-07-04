#include<iostream>
#include"qroot_header.h"
#include<cmath>
 using namespace std;
  void Qroot::getdata()
 {
    cout<<"Enter values of coeffients"<<endl;
    cin>>a>>b>>c;
 }

 void Qroot::putdata()
 {
   cout<<"Coeffietents are"<<a <<b <<"and"<< c;
 }
  float Qroot::del(float a,float b)
  {
     return(sqrt(b*b-4*a*c));
  }
  void Qroot::cod()
 {
   //float d;
    //   d=del(a,b);
   if (del(a,b)==0)
   {
     cout<<"Roots are repeated"<<endl;
   
     if (del(a,b)<0){
    cout<<"Roots are imaginary "<<endl;
     }
   }
    else {
           cout<<"Roots are real and repeated "<<endl;
         }
 }
  float Qroot::root1()
 {
   
   x= (-b+del( a, b))/2*a;
 }

  float Qroot::root2()
  {
    
     y= (-b-del( a, b))/2*a;
  }
   void Qroot::display()
   {
     cout<<"Roots are\n"<<x <<"and"<< y;
   }





  








