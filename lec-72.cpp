#include <iostream>
using namespace std;


// static member function
class Customer
{
  string name;
  int balance;
  static int total_balance;


  public:

  Customer(string name,int balance)
  {
    this->name=name;
    this->balance=balance;
    total_balance+=balance;
  }
  static void bal()
  {
    cout<<total_balance;
  }

  void display()
  {
    cout<<name<<" "<<balance<<" "<<total_balance<<endl;
  }
};
int Customer::total_balance=0;
// for public int Customer can be accessed anywhere

int main()
{
  Customer c1("A",10000);
  Customer c2("B",20000);

  Customer::bal();

}

// basically the static method can only access the static variables 
// when static int variable is made the memory is not allocated yet
// it is allocated when we initialize it 31 line and also literals are const across the program
//also called compile time varible so to initalize static inside class use
//static const int var = ... it just do (Customer::var = value)every time whenever it sees
// customer::var it replace it with value;