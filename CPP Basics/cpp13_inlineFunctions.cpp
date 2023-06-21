#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    return a * b;
}

int main()
{
    int a = 10, b = 12;
    cout << "Value of a is : " << a << endl;
    cout << "Value of b is : " << b << endl;
    cout << "Product of a and b is : " << product(a, b) << endl;
    cout << "Product of a and b is : " << product(a, b) << endl;
    cout << "Product of a and b is : " << product(a, b) << endl;
    cout << "Product of a and b is : " << product(a, b) << endl;
    cout << "Product of a and b is : " << product(a, b) << endl;

    return 0;
}