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
// Copy constructor

  Customer()
  {
    name="pratham";
    accnum = 1234;
    balance =1000;
  }
  Customer(Customer &b)//it does not works cause we are copying c1 into b for which c1 tries to
  // call copy const and again calls this customer (customer b) which goes into infinite loop.
  // To solve it we use pass by reference instead so no copying comes in between.
  {
    name = b.name;
    accnum = b.accnum;
    balance = b.balance;
  }

};

int main()
{
  Customer c1;
  Customer c2(c1);

  Customer c3;
  c3=c1;
  // Assignment operator (used for copying)

  
}


