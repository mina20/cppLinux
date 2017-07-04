#include<iostream>
using namespace std;

class Box
 {
   private:
   double length;  //length of Box
   double breadth; //breadth of Box
   double height; //heigth of box
   public:
   double getlength()const;
   double getbreadth()const;
   double getheigth()const;
};
  int main()
  {
    Box Box1;  //Declare Box1 of type Box
    Box Box2;  //Declare Box2 of type Box
    double volume = 0.0;  // Store the volume of box here
    //Box1 specification
    Box1.setheight (4.0);
    Box1.setbreadth (6.0);
    Box1.setlength (3.0);
 //Box2 specification
   Box2.setlength (10.0);
   Box2.setheight (12.0);
   Box2.setbreadth (12.0);
//volume of box1
  volume = Box1.height * Box1.length * Box1.breadth;
  cout << "Volume of Box1 :"<<volume <<endl;
  volume = Box2.length * Box2.height * Box2.breadth;
  cout << "Volume of Box2 : "<<volume <<endl;
  return 0;

}






 
