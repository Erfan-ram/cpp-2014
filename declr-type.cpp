#include <iostream>
using namespace std;

int main()
{
    // c++ 11 feature
    int a = 3, b = 5;
    float flt = 2.5;
    string str = "text";

    cout << typeid(a).name() << "   "
         << "int";

    cout << typeid(str).name() << "   "
         << "int";

    cout << typeid(flt).name() << "   "
         << "int";
    return 0;
}