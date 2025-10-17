#include <iostream>
using namespace std;

class Customer
{
  string name;
  int balance;
  static int total_balance;//belongs to class not objects all others are part of objects
  // automatically created when class is created all others are created when objects are made;

  public:
  Customer(string name,int balance)
  {
    this->name=name;
    this->balance=balance;
    total_balance+=balance;
  }

  void display()
  {
    cout<<name<<" "<<balance<<" "<<total_balance<<endl;
  }
};

int Customer::total_balance=0;

int main()
{
  Customer c1("A",10000);
  c1.display();
  Customer c2("B",20000);
  c2.display();
}