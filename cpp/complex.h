#include<iostream>
using namespace std;

class Complex
{
 private:
    double real, imag;
 
 public:
    Complex();
    Complex(const double x, const double y);
    Complex(const Complex& c);
    double getReal() const;
    double getImag() const;
    void set(const double x, const double y);
    void conjugate(const double x, const double y);
    void phase(const double x, const double y);
    void magnitude(const double x, const double y);

    Complex operator=(const Complex c);
    Complex operator+(Complex& c) const;
    Complex operator-(Complex& c) const;
    Complex operator*(Complex& c) const;
    Complex operator/(Complex& c) const;

    //friend std::ostream& operator<<(std::ostream& os, const Complex& c);
    //friend std::istream& operator>>(std::istream& os, const Complex& c);
};

