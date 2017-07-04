#include"frac.h"

using namespace std;

void Frac::getdata()
 {
   cout<<"Enter float "<<endl;
   cin>>j;
 }
  void Frac::putdata()
  {
    i=floor(j);
    cout<<"integer part is"<<i<<endl;
  }
   int Frac::gcd(int e,int f)
   {
     e=100;
     d=j-i;
     f=d*100;
  while(f!=e)
{
  if (f>e)
   
     
     {
       f=f-e;
     }
      else 
     {
      e=e-f;
     }
      return (f);
    
   }
  // if(d=100)
  
  // {   
   // g=d;
  // }
    cout<<"gcd"<<f<<endl;
  }
}
void Frac::putnu()
{
  s=gcd(int e,int f)
  a=d/gcd(f);
  b=100/gcd(f);
}
void Frac::display()
{
  cout<<"Given nu in required formate is "<<i<<"+"<<a<<"/"<<b;
}





 




 
