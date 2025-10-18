#include <iostream>
#include <fstream>
using namespace std;



int main()
{
  ofstream fout;
  fout.open("zoom.txt");//if present then open else creates it
  // Created in the directory working
  fout<<"Hello India";
  fout.close();//Resource release 
}

// File handling