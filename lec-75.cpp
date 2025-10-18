#include <iostream>
#include <vector>
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

class Cat:public Animal
{
  public:
  void speak()
  {
    cout<<"Meow\n";
  }

};

int main()
{
  Animal *p;
  vector<Animal*> animals;

  animals.push_back(new Dog());
  animals.push_back(new Cat());
  animals.push_back(new Animal());
  animals.push_back(new Dog());

  for(int i=0;i<animals.size();i++)
  {
    p = animals[i];
    p->speak();
  }

  // decode
}

 
