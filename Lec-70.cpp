// OOPS lecture-1 Learning basics of oops
#include <iostream>
using namespace std;

class Student
{
  public:
  string name;
  int age,roll_number;
  char grade;
};


int main()
{
  // Now it is accessible as public is written

  Student s1;
  s1.name = "Pratham";
  s1.age = 20;
  s1.grade = 'A';
  s1.roll_number = 104;


  cout<<s1.age<<" "<<s1.grade<<" "<<s1.name<<" "<<s1.roll_number;

  Student s2;
  s2.name = "Mann";
  s2.age = 20;
  s2.grade = 'A';
  s2.roll_number = 100;

  cout<<s2.age<<" "<<s2.grade<<" "<<s2.name<<" "<<s2.roll_number;

}