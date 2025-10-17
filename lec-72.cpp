#include<iostream>
using namespace std;
// const keyword - remains same accross program

string a(const string &s)
{
  s="ab";
  return s;
}

int main()
{
  string s ="Pratham";
  cout<< a(s);

}