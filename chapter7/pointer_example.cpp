#include <iostream>

using namespace std;

int main()
{
  int x = 23;
  int *ptr;
  ptr = &x;

  cout<<"the values of x is: "<<x<<endl;
  cout<<"Memory location: "<<ptr<<endl;
  cout<<"the value od ptr: "<<*ptr<<endl;

  *ptr = 5;
  cout<<"the values of x is: "<<x<<endl;


}
