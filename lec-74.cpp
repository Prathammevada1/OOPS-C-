#include<iostream>
using namespace std;

class Human
{
  public:
  string name;

  void display()
  {
    cout<<"My name is "<<name<<"\n";
  }
  
};


class Engineer:public virtual Human
{
  

  public:
  int roll;

  void work()
  {
    cout<<"My roll is "<<roll<<"\n";

  }
 
};

class Youtuber:public virtual Human
{
  public:
  int subscribers;

  void content()
  {
        cout<<"My subs is "<<subscribers<<"\n";


  }
  

};


class Teacher:public Youtuber,public Engineer
{
  int salary;

  public:
  Teacher(int subscribers,int roll,string name,int salary){

    this->name=name;//error as from both youtuber and engineer name is coming from both
    //to solve it write virtual in both Youtuber and engineer classes
    // same goes for display method but virtual solves it for more go ahead he teaches it ahead
    this->subscribers=subscribers;
    this->roll=roll;
    this->salary=salary;



  }

};






int main()
{

  
}
// Multipath INheritance
// Human inherited by Youtuber and engineer and teacher inherit both youtuber and engineer 

