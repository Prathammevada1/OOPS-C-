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

// destructor just release the memory in heap cause the stack will be empty as soon as main 
// function is over so data->memory space with value as 10 and destructor release the space
// IT DOES NOT DESTROY THE OBJECT.
};

int main()
{
  Customer a1;

  
}


