#include <iostream>
using namespace std;

// class Customer
// {
//   string name;
//   int balance,acc_num;
//   public:

//   Customer(string name,int balance,int acc_num)
//   {
//     this->name=name;
//     this->balance=balance;
//     this->acc_num=acc_num;
//   }

//   void deposit(int amount)
//   {
//       if(amount>0)
//       {
//         balance+=amount;
//         cout<<"Amount credited\n";
//       }
//       else
//       {
//         throw "Invalid deposited amount";//if throw runs it terminate and doesnt run rest of the method
//       }
//   }

//   // void withdraw(int amount)
//   // {
//   //     if(amount>0&&amount<balance)
//   //     {
//   //       balance-=amount;
//   //       cout<<"Debited credited\n";
//   //     }
//   // }


// };

int main()
{


  int a,b;
  cin>>a>>b;
  try{
    if(b==0)
    throw "Cant divide by zero";
    int c=a/b;
    cout<<c;
    
  }catch(const char *e)
  {
    cout<<e;
  }

  return 0; 
}