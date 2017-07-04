#include"Complex.h"

Complex::Complex()
{ real = imag = 0.0;
}

Complex::Complex(const double x, const double y)
:real(x), imag(y)
{
}

Complex::Complex( Complex c)
: real(c.getReal()), imag(c.getImag())
{
}

double Complex::getReal() const
{ return real;
}

double Complex::getImag() const
{ return imag;
}

Complex& Complex::operator=( Complex& c)
{
  real = c.getReal();
  imag = c.getImag();
  //return(*this);
}

void Complex::set( const double x,  const double y)
{
  real = x;
  imag = y;
}

void complex::conjugate(const double x, const double y)
{
   real = x;
   imag = -y;
}

/*void complex::magnitude(const double x, const double y)
{ double z;
  z= sqrt((x*x) + (y*y))
  return z;
}

/*void complex::phase(const double x, const double y)
{
  double theta;
  theta = atan(y/x);
  return theta;
}*/

Complex Complex::operator+(Complex& c) 
{
  Complex t;
  Complex c1= c;
  t.set(( real + c1.getReal()), (imag + c1.getImag()));
  return t;
}

Complex Complex::operator-(Complex& c) 
{
  Complex t;
  Complex c1= c;
  t.set(( real - c1.getReal()), (imag - c1.getImag()));
  return t;
}

Complex Complex::operator*(Complex c) 
{
  Complex t;
  Complex c1= c;
  double x =(real * c1.getReal()) -(imag * c1.getImag());
  double y =(real * c1.getReal()) + (imag * c1.getImag());
  t.set(x,y);
  return t;
}

Complex Complex::operator/(Complex ) 
{
  Complex t;
  Complex c1= c;
  double x =(real * c1.getReal()) -(imag * c1.getImag());
  double y =(real * c1.getReal()) + (imag * c1.getImag());
  t.set(x,y);
  return t;
}

/*std::ostream& operator<<(std::ostream& os, Complex& c)
{
   Complex c1 = c;
   os << c1.getReal() << "+i(" << c1.getImag() << ")" << endl;
   return os;
}

std::istream& operator>>(std::istream& os, Complex& c)
{
   Complex c1 = c;
   os >> c1.getReal() >> "+i(" << c1.getImag() >> ")" >> endl;
   return os;*/


