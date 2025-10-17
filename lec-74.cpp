#include<iostream>
using namespace std;

class Human
{
  protected:
  string name;
  int age;

  public:
  Human(string name,int age)
  {
    this->name = name;
    this->age = age;
  }
 
};

class Student:public Human
{ 
  int roll;
  public:
  Student(string name,int age,int roll):Human(name,age)
  {
    this->roll = roll;
    cout<<roll<<" "<<name<<" "<<age;
  }

};

int main()
{
  Student s("Pratham",20,104);
}
// Third commit
// To initialize in parent constructor and use it in child line 23
