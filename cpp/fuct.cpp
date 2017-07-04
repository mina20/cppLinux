#include<iostream>
using namespace std;

int addition(int a,int b)
   {
     return(a+b);
   }
      double addition(double x,double y)
      {
        return(x+y);
      }
       int main()
     {
       int n,m;  
        double c,d;
       cin>>n,m;
       cin>>c,d;
       cout<<addition(n,m)<<endl;
       cout<<addition(c,d)<<endl;
       return 0;

     }
     
 
