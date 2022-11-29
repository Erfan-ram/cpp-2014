#include <iostream>
using namespace std;

int main()
{

  // create a lambda function that prints "Hello World!"
  auto saymeHello = []()
  {
    cout << "in the name of Allah";
  };

  // call lambda function
  saymeHello();

  return 0;
}