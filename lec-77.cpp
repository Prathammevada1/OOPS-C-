#include <iostream>
#include <fstream>
using namespace std;



int main()
{
  ifstream fin;
  fin.open("zoom.txt");
  char c;
  c=fin.get();//now space is traeted is character
  ;//pointer type Takes H first 
  // Hello India space is ignored 
  while(!fin.eof())
  {
    cout<<c;
    c=fin.get();//pointer moves ahead
  }
  fin.close();
}


// File handling