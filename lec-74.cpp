#include<iostream>
using namespace std;

class Human
{
  protected:
  string name;
  int age;

  Human()
  {

  }
  public:
  void work()
  {
    cout<<"Working";
  }
};

class Student:public Human
{ 
  int roll;
};

int main()
{
  Student s;
  s.work();
}
// First commit
// Here we see method is a public type which means we can directly access it from student object
// 