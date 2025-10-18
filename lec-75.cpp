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
// Arithmetic: +, -, *, /, %



// Assignment: =, +=, -=, etc.

// Comparison: ==, !=, <, >, <=, >=

// Increment / Decrement: ++, --

// Logical: !, &&, || (note: && and || can be overloaded but behave differently because of short-circuiting)

// Bitwise: &, |, ^, ~, <<, >>

// Subscript: []

// Function call: ()

// Member access through pointer: ->

// Comma operator: ,

// Dereference: * (pointer), unary *

// New / Delete: new, delete, new[], delete[]

// concept to remember[

// // int x = 10, y = 20;
// const int *ptr = &x; // pointer to const value

// //*ptr = 15; // ❌ Error: cannot modify value through pointer
// ptr = &y;     // ✅ Allowed: pointer can point elsewhere

// // int x = 10;
// int * const ptr = &x; // const pointer to value

// *ptr = 20;  // ✅ Allowed: modify the value
// int y = 30;
// //ptr = &y; // ❌ Error: cannot change pointer
// ]