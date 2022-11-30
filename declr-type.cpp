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
    char ch[] = "abcd";

    cout << typeid(a).name() << "   "
         << "int" << endl;

    cout << typeid(str).name() << "   "
         << "string" << endl;

    cout << typeid(flt).name() << "   "
         << "float" << endl;

    cout << typeid(chr).name() << "   "
         << "char" << endl;

    cout << typeid(ch).name() << "   "
         << "char list" << endl;

    return 0;
}