#include<iostream>
using namespace std;


class Stud
 {
  public:
  char name[20],clas[10];
  int rol,age;
  float per;

 void enter()
  {
   cout<<"\nEnter student name Age and Roll number"; cin>>name>>age>>rol;
   cout<<"\nEnter student class and percentange"; cin>>clas>>per;
 }
  void display()
  {
    cout<<"\nAge\nName\nR.no\n\nclass\n%age";
    cout<<"\n"<<age<<name<<"\n"<<rol<< per<<"%";
}
};
  int main()
  {
   class Stud S;
   S.enter();
   S.display();
   cin.get(); //use this to wait for a keypress 
}






 
