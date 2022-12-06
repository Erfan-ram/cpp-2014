// vectore
#include <iostream>
#include <vector>

// std::vector<T> vector_name;
// vector<int> num;

using namespace std;

int main()
{

    // initializer list
    vector<int> vector1 = {1, 2, 3, 4, 5};

    // uniform initialization
    vector<int> vector2{6, 7, 8, 9, 10};

    // method 3
    vector<int> vector3(5, 12);

    // -------------------------------
    // ------ print a vectore ---------------------------
    // -------------------------------

    cout << "vector1 = ";

    // ranged loop
    for (const int &i : vector1)
    {
        cout << i << "  ";
    }

    cout << "\nvector2 = ";

    // ranged loop
    for (const int &i : vector2)
    {
        cout << i << "  ";
    }

    cout << "\nvector3 = ";

    // ranged loop
    for (int i : vector3)
    {
        cout << i << "  ";
    }

    for (int i = 0; i < 5; i++)
    {
        cout << vector3[i] << "  ";
    }

    // -------------------------------
    // ------ push to a vectore ---------------------------
    // -------------------------------
    vector<int> num{1, 2, 3, 4, 5};

    cout << "\n\npush to a vectore: ";

    for (const int &i : num)
    {
        cout << i << "  ";
    }

    // add the integers 6 and 7 to the vector
    num.push_back(6);
    num.push_back(7);

    cout << "\nUpdated Vector: ";

    for (const int &i : num)
    {
        cout << i << "  ";
    }
    // -------------------------------
    // ------ exception ---------------------------
    // -------------------------------

    vector<int> new_test{1, 2, 3};

    // gives garbage value
    // cout << new_test[4];

    // throws an exception
    // cout << new_test.at(4);
    
    return 0;
}