#include <iostream>
using namespace std;

class Complex{

  int real;
  int complex;

  public:

  Complex(int real,int complex)
  {
    this->real=real;
    this->complex=complex;
  }

  void display()
  {
    cout<<real<<" + i"<<complex;
  }
  Complex operator +(Complex &C)
  {
    Complex ans(0,0);//Either make a constructor with no argument Complex ans else
    // define ans(anythin num) 
    ans.real=this->real+C.real;
    ans.complex=this->complex+C.complex;
    return ans;
  }
};

int main()
{

  Complex c1(3,4);
  Complex c2(2,3);
  // complex c3 = c1+c2 makes complex temp = c1+c2 and then c3(temp) copy initialization
  // c3(c1+c2) directly initilaize c3 compiler uses result of c1+c2 to built c3 direct initialization
  Complex c3(c1+c2);
  c3.display();
}
// Polymorphism - one object works as many
// compile time and runtime polymorphsim

// compile-1.method overloading ,2.operator overloading