# cpp-repo

<div id="badges" align="center">

  <img src="https://media.giphy.com/media/QACOVFrnxWgkkm9vAb/giphy.gif" width="70px"/>
  <img src="https://media.giphy.com/media/LgC9OQ53v5mFi/giphy.gif" width="50px"/>
    <img src="https://media.giphy.com/media/LgC9OQ53v5mFi/giphy.gif" width="50px"/>

</div>

---

>C++ 2014 Features

- [Aggregate member initialization](#aggregate-member-initialization)

## Aggregate member initialization
a struct can have multiple members:
```
struct Employee
{
    int id {};
    int age {};
    double wage {};
};
```
When we define an object with a struct type, we need some way to initialize multiple members at initialization time:
```
Employee joe; // how do we initialize joe.id, joe.age, and joe.wage?
```
Aggregates use a form of initialization called aggregate initialization, which allows us to directly initialize the members of aggregates. To do this, we provide an initializer list as an initializer, which is just a list of comma-separated initialization values.
```
Employee joe { 2, 28, 45000.0 };     // list initialization using braced list (preferred)
```
[*click to see full source code*](https://github.com/Erfan-ram/cpp-repo/blob/master/files/aggregate.cpp)
