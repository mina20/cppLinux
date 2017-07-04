
#include<iostream>
using namespace std;
class Shape
 {
   public :
   int a,b;
   int A;
   public:
   
   void getdata();
   void display();
 };
  
 //derive class
 class Rectangle : public Shape
 {
    public:
    int area();
 };

 void Shape::getdata()
  {
    cout<<"Enter values of a and b"<<endl;
    cin>>a>>b;
  }
  void Shape::display()
  {
    cout<<"You have enter"<<a<<"and"<<b;
  }
 int Rectangle::area()
  {
    A=a*b;
    cout<<"area of rectangle is"<<"="<<A;
  }
  int main()
  {
    Rectangle R;
    R.getdata();
    R.display();
    R.area();
    return 0;
}


