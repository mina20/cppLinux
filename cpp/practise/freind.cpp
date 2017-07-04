#include<iostream>
#include<cmath>

int main()
    {
      double a,b,c,d;
      cout<<"Enter four points";
      cin>>a,b,c,d;
      friend ostream& operator <<(ostream& os,point a);
      friend istream& operator >>(istream& is ,point b);
      ostream& operator <<(ostream& os,point a){
      
      os<<"("a<<","<<b<<")"<<"("<<c<<","<<d<<")";
      is>>comma>>a>>comma>>b>>comma>>c>>comma>>d;
   }  



