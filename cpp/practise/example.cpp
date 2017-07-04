#include<iostream>
using namespace std;
int main()
{
cout.width(5);
cout<<-23<<endl;
cout.setf(ios::left,ios::adjustfield);
cout<<-23<<endl;
cout.width(5);
cout.setf(ios::internal,ios::adjustfield);
cout<<-23<<endl;
return 0;
}
