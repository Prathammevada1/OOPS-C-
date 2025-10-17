// COnstructor and deconstructors
#include <iostream>
using namespace std;

class Customer
{
//  Destructors-Last function called before destroying function
  string name;
  int *data;

  public:
  Customer(){

    name= "Pratham";
    data = new int;
    *data = 10;
    cout<<"const is called";

  }
  ~Customer(){
    delete data;
    cout<<"dest is called\n";
  }


};

int main()
{
  Customer a1;
// Imp Customer a1,a2,a3 the a1 constructor is called first and a3 last but a3 destructor
// is called first as it is at top of the stack
  
}


