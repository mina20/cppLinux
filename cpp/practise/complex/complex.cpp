#include"complex.h"
using namespace std;

  void Complex::getdata()
  {
    cout<<"Enter real and imag part"<<endl;
    cin>>r1>>a1>>r2>>a2;
  }
   void Complex::putdata()
   {
      cout<<"complex no is "<<r1<<"+"<<a1<<"i"<<endl;
      cout<<"other no is "<<r2<<"+"<<a2<<"i"<<endl;
   }
     void Complex::operator +()
     {
       int r,a;
       r=r1+r2;
       a=a1+a2;
      cout<<"addition of two complex no is "<<r<<"+"<<a<<"i"<<endl;
    }
    void Complex ::operator -()
    {
      int x,y,z;
      x=r1-r2;
      y=a1-a2;
      
      cout<<"substraction of two complex no is "<<x<<"+"<<y<<"i"<<endl;
     }
      void Complex::operator *()
       {
         int m1,m2,z1,z2;
         m1=r1*r2;
         m2=a1*a2;
         z1=-1*a1;
         z2=-1*a2;
         cout<<"multiplication of no is "<<m1<<"+"<<m2<<"i"<<endl;
         cout<<"conjugates of enter numbers are "<<r1<<z1<<"i"<<endl;
         cout<<r2<<z2<<"i"<<endl;  
       }





 