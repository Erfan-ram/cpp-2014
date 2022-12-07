# cpp-repo

<div id="badges" align="center">

  <img src="https://media.giphy.com/media/QACOVFrnxWgkkm9vAb/giphy.gif" width="70px"/>
  <img src="https://media.giphy.com/media/LgC9OQ53v5mFi/giphy.gif" width="50px"/>
    <img src="https://media.giphy.com/media/LgC9OQ53v5mFi/giphy.gif" width="50px"/>

</div>

---

> `C++ 2014 Features`
- [Function return type deduction](#function-return-type-deduction)
- [Constexpr Specifier](#constexpr-specifier)
- [Aggregate member initialization](#aggregate-member-initialization)
- [Lambdas](#lambdas)
---
## Function return type deduction
Type deduction (also sometimes called type inference) is a feature that allows the compiler to `deduce the type of an object` from the object’s initializer. To use type deduction, the `auto` keyword is used in place of the variable’s type:

```cpp
  auto d = 5.0 ; // 5.0 is a double literal, so d will be type double
  auto i = 1 + 2; // 1 + 2 evaluates to an int, so i will be type int
  auto x = i; // i is an int, so x will be type int too
```
Type deduction will not work for objects that do `not have initializers` or `empty initializers`. Thus, the following is not valid:
```cpp
  auto x; // The compiler is unable to deduce the type of x

```
Since the compiler already has to deduce the return type from the return statement, in C++14, the auto keyword was extended to do function return type deduction. This works by using the auto keyword in place of the function’s return type. When using an auto return type, all return statements within the function must return values of the same type . For example:
```cpp
auto add(int x, int y)
{
  return (x + y);
}
```
[*click to see full source code* :desktop_computer:](https://github.com/Erfan-ram/cpp-repo/blob/master/files/autoFunc.cpp)

---
## Constexpr Specifier

constexpr is a feature added in C++ 11 but developed features in c++ 14. The main idea is a performance improvement of programs by doing `computations at compile time` rather than run time. Note that once a program is compiled and finalized by the developer, it is run multiple times by users. The idea is to spend time in compilation and save time at `run time`.

```cpp
#include <iostream>

constexpr int product(int x, int y) { return (x * y); }

int main()
{
	constexpr int x = product(10, 20);
	std::cout << x;
	return 0;
}

```

- In C++ 11, a constexpr function should contain only one return statement. C++ 14 allows more than one statement.
- constexpr function should refer only to constant global variables.
- constexpr function can call only other constexpr functions not simple functions.
- The function should not be of a void type.

---
## Aggregate member initialization
a struct can have multiple members:
```cpp
struct Employee
{
    int id;
    int age;
    double wage;
};
```
When we define an object with a struct type, we need some way to initialize multiple members at `initialization time`:
```cpp
Employee joe; // how do we initialize joe.id, joe.age, and joe.wage?
```
Aggregates use a form of initialization called aggregate initialization, which allows us to directly initialize the members of aggregates. To do this, we provide an initializer list as an initializer, which is just a `list of comma-separated` initialization values.
```cpp
Employee joe { 2, 28, 45000.0 };     // list initialization using braced list (preferred)
```
[*click to see full source code* :desktop_computer:](https://github.com/Erfan-ram/cpp-repo/blob/master/files/aggregate.cpp)

---
## Lambdas
A basic lambda expression can look something like this:
```cpp
auto greet = []() {
  // lambda function body
};
```

The above code is equivalent to:
```cpp
void greet() {
  // function body
}
```
Now, just like the normal functions, we can simply invoke the lambda expression using:
```cpp
greet();
```

here is an lambda with 2 parameters :
```cpp
  auto add = [] (int a, int b) {
   cout << "Sum = " << a + b;
  };
```

[*conce you've learned auto functions , now you can comprehend this example easily* :desktop_computer:](https://github.com/Erfan-ram/cpp-repo/blob/master/files/lambda-plus.cpp)
