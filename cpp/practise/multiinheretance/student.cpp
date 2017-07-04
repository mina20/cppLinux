 

#include"student.h"
using namespace std;

int Student::get_number(int a)
{
  roll_number=a;
}
void Student::put_number()
{
  cout<<"roll number"<<roll_number<<endl;
}
 float Test::get_mark(float x,float y)
 {
   
   
   sub1=x;
   sub2=y;
}
 void Test::put_mark()
{
  cout<<"mark in sub1 :"<<sub1<<endl;
  cout<<"mark in sub2 :"<<sub2<<endl;
}
 void Result::display()
 {
   
   total=sub1+sub2;
   put_number();
   put_mark();
   cout<<"total marks is "<<total<<endl;
}











