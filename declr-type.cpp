#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
     // c++ 11 feature
     const char test = 'i';
     int a = 3, b = 5;
     float flt = 2.5;
     string str = "text";
     char chr = 'c';
     char ch[100] = "abcd";

     cout << (*typeid(a).name() == 'i') << "   "
          << "int" << endl;

     cout << *typeid(str).name() << "   "
          << "string" << endl;

     cout << *typeid(flt).name() << "   "
          << "float" << endl;

     cout << *typeid(chr).name() << "   "
          << "char" << endl;

     cout << typeid(ch).name() << "   "
          << "char list" << endl;
     cout << *typeid(ch).name() << "   "
          << "char list" << endl;

     // ---------- //
     float ft = 4.8;

     decltype(ft) expl = ft + 9.8;
     cout << typeid(expl).name();

     // ---------- //
     cout << typeid(typeid(expl).name()).name();

     return 0;
}