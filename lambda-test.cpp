#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
     // c++ 11 feature
     int a = 3, b = 5;
     float flt = 2.5;
     string str = "text";
     char chr = 'c';
     char ch[100] = "abcd";

     auto myLambda = [=]()
     {
          cout << a << "  " << ch;
     };

     myLambda();

     return 0;
}