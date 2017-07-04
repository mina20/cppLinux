#include<iostream>

using namespace std;

class Complex
{
        private:
                int real,imag;
        public:
                Complex();
                Complex(int x,int y);
                Complex(&Complex C);
                double getReal()
                {
                        cout<<"Get real part of num: ";
                        cin>>real;
                }
                double getImag()
                {
                        cout<<"Get imag part of num: ";
                        cin>>imag;
                }
                void display()
                {
                        cout<<"Complex num is: ";
                        cout<<real<<"+i"<<imag<<endl;
                }
                void conjugate(int x,int y);
};
void Complex::conjugate(int x,int y)
{
        int real=x;
        int imag= -1 *y;
}

int main()
{
   Complex C1;
        cout<<"First complex num: ";
        C1.getReal();
        C1.getImag();
       C1.display();
       C1.conjugate(int,int);
        return 0;
}
