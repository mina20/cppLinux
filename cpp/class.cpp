

	//this programe gives idea of class AND OBJECT//


#include<iostream>
  using namespace std;
  class Rectangle
  {
    int w,h;
  public:
    void set_values(int,int);
    int area()
    {
      return w*h;
    }
  };
    void Rectangle::set_values(int x,int y)
    {
       w=x;
       h=y;
    }
      int main()
      {
          Rectangle rect;
          rect.set_values(3,4);
          cout<<"area :"<< rect.area();
          return 0;
      }
