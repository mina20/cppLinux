class Complex
{
  private:
   float real,imaginary;
  public:
   Complex();                     
   Complex(float x,float y);      
   void Display();
   void operator-();              
   void operator*();              
   void operator+();              
};
