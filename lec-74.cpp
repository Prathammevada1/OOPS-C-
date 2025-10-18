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

class Student:public Human
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
  Teacher t("Pratham",10000);
  Student s("Ansh",10);
}
// Hierarchical INheritance
// One class inherited by many 
// Like Human is inherited by student,teacher,employee etc

