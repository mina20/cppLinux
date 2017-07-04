#include<iostream>
using namespace std;
 class Triangle
 {
   public:
   double base;  //base of tringle
   double height; //height of triangle
 };
  
  int main()
   {
     Triangle Tri; //declaration of tri of type triangle
     double Area = 0.0;
     Tri.base= 4.0;
     Tri.height = 2.0;
     Area = (Tri.base*Tri.height)/2;
     cout<<"Area of triangle is :"<<Area<<endl;
  }     
