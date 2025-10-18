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
};

int main()
{
  Animal *p;
  p=new Dog();
  p->speak();   
}
//virtual keyword 
// normal flow without virtual keyword 
// during compile time its decided to run speak of animal 
// If virtual keyword is added then it decides at runtime so p stores address of dog and runs
// speak of Dog