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

  public:
  void a(string naming)
  {
    name=naming;
    cout<<name;
  }
};

int main()
{

  Student s;
  s.a("Pratham");
// This works as the protected + public = public but we use variable inside the class only so..
}

// Access modifiers
// private>protected>public