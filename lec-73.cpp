#include<iostream>
using namespace std;

class Human
{

  string Religion,color;//not necessary info for a student 
  protected:
  string name;
  int age;
};

class Student:protected Human//Inheritance
{
  private:
  int roll,fees;

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
}
// If we make a human object still cant access name,... but inheritance is applicable