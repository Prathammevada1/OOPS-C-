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
  void display()
  {
    cout<<name<<"hi";
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
  void display()
  {
    cout<<name;
  }

};

int main()
{
  Student s("Pratham",20,104);
  s.display();
}
// Fourth Commit
// which method runs if method in child child one or else parent one