#include <iostream>

using namespace std;

<<<<<<< HEAD
class Exception
{
  protected:
  string msg;

  public:

  Exception(string msg)
  {
    this->msg = msg;
  }

  string what()
  {
    return msg;
  }
};

class Runtime_error:public Exception
{
  Runtime_error(const string &msg):Exception(msg)
  {

  }
};

//this might what it would look like
// throw the object of runtime() constructor is called and it calls exception
// constructor and msg value is allocated and it is catch at const runtime_error &e
// here in e the object comes and e.what() prints msg in e

class Customer
{
  int balance;

  public:
  Customer(int balance)
  {
    this->balance=balance;
  }

  void withdraw(int amount)
  {
    if(amount<0)
    throw runtime_error("Cant withdraw");
    
  }
=======
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
<<<<<<< HEAD

  Customer c1(1000);
  try{
    c1.withdraw(-100);
  }catch(const runtime_error &e)//here the object is received throw runtime_error("")
  {
    cout<<e.what();
  }
  catch(...)
  {

  }
  // default catch
=======
  try
  {
    int *p=new int[100000000000000];
    delete []p;
  }catch(const bad_alloc &e)
  {
    cout<<"Exception occur due to line 9 "<<e.what();

  }
>>>>>>> c9de8c47886cfa38acc885ad0c40a82dfc6f3839

}
//what exception class looks like roughly