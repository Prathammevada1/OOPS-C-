// OOPS lecture-1 Learning basics of oops
#include <iostream>
using namespace std;

class Student
{


};


int main()
{
  
  // Right now no memory is allocated for class it is only allocated when we make object of that class
  Student obj1;
  cout<<sizeof(obj1)<<endl;

  // Now 4 bytes of memory is allocated as we made an object;
  // If nothing is in the class it will still take 1 byte of memory
// Explanation - We know int takes four bytes lets says int a is stored at 1000 address and till 1003
// for class if we make Student a;Student b; if no memory is allocated to them then how to 
// differentiate the objects like obj1 have 0 memory space then it wont exist in address
// & obj1 would be undefined and also goes for obj2 ;
// Its like making obj1 but never giving it space to form it wont exist
  Student obj2;

}