#include <iostream>
using namespace std;

class InvalidAmount_Error:public runtime_error
{
  public:
  InvalidAmount_Error(const string &msg):runtime_error(msg)
  {

  }
};
//&msg is used cause if only msg is used two copies are made one when padding msg to runtime exception
// and other while making string for INvalid amount constructor
 
class Customer
{
  int balance;

  public:
  Customer(int bal)
  {
    balance = bal;
  }

  void withdraw(int amt)
  {
    if(amt<0)
    throw InvalidAmount_Error("Not valid amount");
  }
};

int main()
{
  Customer c1(2000);
  try
  {  
    c1.withdraw(-100);
  }catch(const InvalidAmount_Error &e)
  {
    cout<<e.what();
  }
}