#include<iostream>
#include"complex.h"
using namespace std;

int main()
{
  float x,y;
  cout << "Real part:" << endl;
  cin >> x;
  cout << "Imaginary part:" << endl;
  cin >> y;
  Complex a1(x,y);
  a1.Display();
  -a1;
  *a1;
  +a1;
  return 0;
} 
