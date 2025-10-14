// OOPS lecture-1 Learning basics of oops
#include <iostream>
using namespace std;

class Student
{
  public:
  string name;
};


int main()
{
  // Static vs dynamic memory allocation
  // int * p =new int p with address pointing to heap
  // p is in stack and pointer to an address in heap
  // Now creating objects dynamically
  Student *s = new Student;
  (*s).name = "Pratham";
  // s->name="Rohit"; same as line 19;
  cout<<s->name<<endl;
}