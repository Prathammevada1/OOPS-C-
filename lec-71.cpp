// COnstructor and deconstructors
#include <iostream>
using namespace std;

class Customer
{
// Customer constructor already exists hidden we just override it and make new
  public:
  string name;
  int accnum;
  int balance;

  int *roi;
// default constructor  
  Customer()
  {
    roi = new int[100];
  }
  // Construtor is also used to gather resource like in real time we need an 100 size arr space
  // we define it in constructor if not the code should terminate
  // here roi demands space in heap  if space was not available it should have terminated program
  
};

int main()
{
  Customer c1("Pratham",123,1000);
  cout<<c1.balance;
}
// this is a pointer pointing to the current object c1 


