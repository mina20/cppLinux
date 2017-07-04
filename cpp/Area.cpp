#include<iostream>

using namespace std;
 class Area
 {
   public:
   double side;
   double length;
   double breath;
   double base;
};
  int main()
   {
      Area A1;
      Area A2;
      Area A3;
      A1.side =2.0;
      A2.length=3.0;
      A2.breath = 4.0;
      A3.side= 2.5;
      A3.base = 1.5;
      double area = 0.0;
      cout<<"Area of square : "<<A1.side*A1.side<<endl;
      cout<<"Area of rectangle : "<<A2.length*A2.breath<<endl;
      cout<<"Area of trianle : "<<1/2*(A3.side*A3.base)<<endl;
   }






 

