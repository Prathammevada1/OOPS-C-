#include<iostream>
using namespace std;

class Human
{
  public:
  string name;

  Human(string name)
  {
    this->name=name;
  }
};

class A
{
  int propA;

  
};

class Student:public Human,public A
{
  int roll;

  public:
  Student(string name,int roll):Human(name) 
  {
    this->roll=roll;
    cout<<name<<" "<<roll<<"\n";
  }

};


class Teacher:public Human
{
  int salary;

  public:
  Teacher(string name,int salary):Human(name)
  {
    this->salary=salary;
    cout<<name<<" "<<salary<<"\n";
  }

};


int main()
{
  
}
// Hybrid INheritance
// Multiple+hybrid 

