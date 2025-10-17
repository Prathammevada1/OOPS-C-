#include<iostream>
using namespace std;

class Human
{
  public:
  string name;
  int age;
};

class Student:protected Human//Inheritance
{
  int roll;

  // copied like 
  // public + private = private
  // protected + public =protected;
  // public +anything =anything;
  // private string name;
  // private int age;


};

int main()
{

  Student s;
  s.age;

}
// Access modifiers
// private>protected>public