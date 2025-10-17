#include<iostream>
using namespace std;

class Human
{
  protected:
  string name;
  int age;

  public:
  Human()
  {
    cout<<"Hi human\n";
  }
  ~Human()
  {
    cout<<"hi human de\n";
  }
  
  void work()
  {
    cout<<"Working";
  }
};

class Student:public Human
{ 
  int roll;
  public:
  Student()
  {
    cout<<"hi student\n";
  }
  ~Student()
  {
    cout<<"hi student de\n";
  }
};

int main()
{
  Student s;
}
// Second commit
// Constructor and destructor calling
