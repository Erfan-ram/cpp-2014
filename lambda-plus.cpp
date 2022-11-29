// in the name of Allah
#include <iostream>
using namespace std;

int main()
{

  // create a lambda function that prints "Hello World!"
  auto plusFunc = [](auto a, auto b)
  {
    cout << a + b << endl;
  };

  // call lambda function
  plusFunc(5, 3);
  plusFunc(2.3, 2.4);
  plusFunc('a', 'b');

  return 0;
}