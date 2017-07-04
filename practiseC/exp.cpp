#include<iostream>
using namespace std;
class DemoPrivate{
  private:
  int value;
 public:
 void set(int n){ value='n';}
 int get() const{return value;}
 };
 int main()
 {
   DemoPrivate obj;
   //obj.value=5;error
   obj.set(5); //k
   cout<<obj.get();
   return 0;
  }
 
