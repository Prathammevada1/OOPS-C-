#include <iostream>

using namespace std;

class exception
{
  protected:
  string msg;

  public:

  exception(string msg)
  {
    this->msg = msg;
  }

  string what()
  {
    return msg;
  }
};

int main()
{
  try
  {
    int *p=new int[100000000000000];
    delete []p;
  }catch(const bad_alloc &e)
  {
    cout<<"Exception occur due to line 9 "<<e.what();

  }

}
//what exception class looks like roughly