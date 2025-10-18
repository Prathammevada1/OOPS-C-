#include <iostream>
using namespace std;

class Animal
{
  public:
  virtual void speak()
  {
    cout<<"hu hu\n";
  }
};

class Dog:public Animal
{
  public:
  void speak()
  {
    cout<<"Bark\n";
  }

  void roti()
  {
    cout<<"Hello\n";
  }
};

int main()
{
  Animal *p;
  p=new Dog();
  p->roti();   
}
// Not allowed as p is pointing towards animal class and it doesnt have roti function 
