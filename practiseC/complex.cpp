#include<iostream>
#include<cmath>
#include"complex.h"
using namespace std;

Complex::Complex()
{
  real=0.0;
  imaginary=0.0;
};

Complex::Complex(float x,float y)
{
  real=x;
  imaginary=y;
};

void Complex::Display()
{
  cout << "Complex number:" << endl;
  cout << "(" << real << "," << imaginary << ")" << endl;
}

void Complex::operator-()
{
  float y;
  y=-1*imaginary;
  cout << "Complex conjugate:" << endl;
  cout << "(" << real << "," << y << ")" << endl;
}

void Complex::operator*()
{
  float mag;
  mag=sqrt((real*real)+(imaginary*imaginary));
  cout << "Magnitude:" << endl << mag << endl;
}

void Complex::operator+()
{
  float z;
  z=atan(imaginary/real);
  cout << "Phase:" << endl << z <<endl;
}
