#include<iostream>
using namespace std;

class Complex
{
 private:
    double real, imag;
 
 public:
    Complex();
    Complex( double x,  double y);
    Complex( Complex c);
    double getReal() const;
    double getImag() const;
    void set( double x,  double y);
    void conjugate( double x,  double y);
    void phase( double x,  double y);
    void magnitude( double x,  double y);

    Complex operator=( Complex c);
    Complex operator+(Complex& c) ;
    Complex operator-(Complex& c) ;
    Complex operator*(Complex& c) ;
    Complex operator/(Complex& c) ;

    //friend std::ostream& operator<<(std::ostream& os, const Complex& c);
   // friend std::istream& operator>>(std::istream& os, const Complex& c); 
};

