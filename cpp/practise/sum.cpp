

//practise i programe for addition

# include <iostream>
using namespace std;

   class Sum
   {
     int a,b,s;
     public:
    void getdata(void);
    void putdata(void);
  };

   void Sum::getdata()
   {
     cout<<"Enter two number for addition"<<endl;
     cin>>a>>b;
  }
     void Sum::putdata()
     {
       s=a+b;
       cout<<"Sum of numbers"<<a <<"+"<<b<<"="<<s;
     }

  int main()
  {
    Sum s1;
    s1.getdata();
    s1.putdata();
 
   return 0;

  }










 
