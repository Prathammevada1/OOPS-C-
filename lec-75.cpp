#include <iostream>
#include <vector>
using namespace std;

class Animal
{
  public:
  virtual void speak()=0;//Pure virtual /Abstract class 
  // Now no one will be able to create object of this class 

  // Use we know animal is common it doesnt have a specific sound to itself 
  // But all the other animals inheriting it have like dog barks ,cat meows etc.
  // so now all 
};

class Dog:public Animal
{
  public:
  void speak()
  {
    cout<<"Bark\n";
  }

};

class Cat:public Animal
{
  public:
  

};

int main()
{
  Animal *p;//valid
  // Animal a; //invalid cant do if abstract class but still can make pointer
  // Also here we see that cat doesnt implements the speak function so it makes cat abstract
  // class as well 
  vector<Animal*> animals;

  animals.push_back(new Dog());
  animals.push_back(new Dog());

  for(int i=0;i<animals.size();i++)
  {
    p = animals[i];
    p->speak();
  }

  // decode
}

 
