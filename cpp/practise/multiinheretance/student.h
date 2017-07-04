
#include<iostream>
using namespace std;
 class Student
 {
   protected:
   int roll_number;
   public :
   int get_number(int a);
   void put_number();
 };

  class Test :public Student
  {
    protected:
    float x;
    float y;
    public:
   float sub1;
   float sub2;
    float get_mark(float x ,float y);
    void put_mark();
 };

  class Result:public Test
  {
     float total;
     public:
    void display();
  }; 















