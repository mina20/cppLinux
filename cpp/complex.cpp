#include<iostream>

using namespace std;
  class Complex{
   private:
   double real,imag;
  public:
  Complex();
  Complex(const double x,const double y)
  {
     real=x;
      imag=y;
   }  
     
      Copmlex(const Complex& c);
      double getReal()const{return real;}
      double getImag() const{return imag;}
      void conjugate();
      double magnitude();
      friend ostream & operater <<(ostream& s,const Complex& c);
};
  int main()
  {
    Complex obj;
    Complex c1(2.3,8.9);
    Complexc3(c1);
    
    
    
    return 0;
  }

