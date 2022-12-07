// A C++ program to demonstrate the use of constexpr
#include <iostream>
using namespace std;

constexpr long int fib(int n)
{
    return (n <= 1) ? n : fib(n - 1) + fib(n - 2);
}

int main()
{
    // value of res is computed at compile time.
    constexpr long int res = fib(30);
    cout << res;
    return 0;
}
