// OOPS lecture-1 Learning basics of oops
#include <iostream>
using namespace std;

// if char c int b char d double e 
// c p p p b b b b d p p p p p p p e e e e e e e e 
// e takes memory from multiple of 8 divible by the byte it takes memory like int takes 
// memory from multiple of 4;
// 24 bytes
class Student
{
  // Greedy Allignment
  // First write the datatype that takes more space and in descending order
  
  char b;
  int a;
  char c;
  double e;
};


int main()
{
  
  // Concept of padding
  // compiler does this when writtten char a int b;
  // it gives 1 byte to char and padding of 3 byte(for 32 bit os ) it reads in segment
  // of 4 bytes.Now if we write char a int b char c it takes 12 bytes char 1 byte with 3 padding
  // int 4 byte and char 1 byte with three padding but compiler takes nearest divisible 
  // number by 4 to 9 which is 12;
  // Instead if we write int a char b char c int takes 4 bytes and char 2 byte with padding of 2 
  Student obj1;
  cout<<sizeof(obj1)<<endl;
}