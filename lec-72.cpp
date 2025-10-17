#include<iostream>
using namespace std;

class Customer
{
  string name;
  int balance;

  public:
  Customer(string a,int b)
  {
    name=a;
    balance=b;

  }

  void deposit(int amount)
  {
    if(amount>0)
    balance+=amount;
    else
    cout<<"INvalid";
  }
};

int main()
{
  Customer a1("A",1000);
  // if we do public to the variables then a1.balance is accessible everywhere 
  // here as well a1.balance=-2;
  a1.deposit(-500);
}

// encapsulation-wrapping variable and function in class and controlling its access
// data-hiding-not for hacker for user to give variable correct values