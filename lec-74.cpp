#include<iostream>
using namespace std;

class GrandDad
{
  public:
  int a=10;
};
class Dad:public GrandDad
{
  public:
  void display()
  {
    cout<<a<<"\n";
  }
};
class Son:public Dad
{
  public:
  void display(){
  cout<<a;
  }

};


int main()
{
  Dad d;
  d.display();
  Son s;
  s.display();
}
// Multilevel-Inheritance
// One inherit other and gives it to the next one to inherit and goes on...
