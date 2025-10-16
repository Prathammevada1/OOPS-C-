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
// default constructor  
  Customer()
  {
    cout<<"Hi";
  }
  // Parameterised const
  Customer(string name ,int b,int c)
  {
    this->name=name;
    this->accnum=b;
    this->balance=c;
    // if written likw name=name it takes localised name so this->name=name takes left\
    // one as the current objects attribute and name localised one

    
  }

};

int main()
{
  Customer c1("Pratham",123,1000);
}
// this is a pointer pointing to the current object c1 

