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
  p = new Dog();

  


  // Here new Dog () returns an address to pointer p for the dog object
  // dog object contains animals attributes vpointer dog attributes space
  // when virtual keyword is not used the pointer points to animal part of
  // dog objects to run method but when virtual is written it goes for runtime to decide
  // what to run so 
  // p is declared as a pointer to Animal.

//  new Dog() allocates a Dog object on the heap and returns a Dog*.

// Because Dog is an Animal (inheritance), C++ allows assigning a Dog* to an Animal*.

// So the pointer p itself stores the address of the Dog object, but its type is Animal*.
  // p (Animal*) --> points to Dog object
  
  // cout<<*p;//error as p doesnt have fixed byte like int so compiler doesnt know to print 
}
// Not allowed as p is pointing towards animal class and it doesnt have roti function 


// Bacially Animal type p pointer point to dog type object 
// during compile time it decide to run animal method but virtual->runtime it 
// have a vtable and vpointer made during constructor of dog (every object of that class shares it)
// and vpointer seraches for the original method from dog and runs it   Dog::speak() 
