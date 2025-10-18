#include<iostream>
using namespace std;

class Engineer
{
  public:
  string specialization;


  Engineer()
  {
    cout<<"Engineer"<<"\n";
  }

  void work()
  {
    cout<<"Specialization:"<<specialization<<"\n";
  }
};

class Youtuber
{
  public:
  int subscribers;

  Youtuber(int sub)
  {
    subscribers=sub;
    cout<<"Youtuber with " <<subscribers;
  }

  void subscribe()
  {
    cout<<"Specialization:"<<subscribers<<"\n";
  }

};

class Student:public Engineer,public Youtuber
{
  public:

  Student(int sub):Youtuber(sub)
  {

  }

  void display()
  {
    work();
    subscribe();
  }
};

int main()
{
  Student s(1000);
}
// Constructor is called in order of inheritance and to call one with parameter and other without
// checkout line 43
// class D : public A, public B, public C {
// public:
    // D’s constructor calls:
    //   A()   → default
    //   B(x)  → one parameter
    //   C(x, y) → two parameters
//     D(int x, int y) : A(), B(x), C(x, y) {
//         cout << "D(" << x << ", " << y << ") called\n";
//     }
// };
