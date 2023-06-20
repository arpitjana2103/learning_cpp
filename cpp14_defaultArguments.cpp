#include <iostream>
using namespace std;

int product(int a, int b = 100)
{
    return a * b;
}

int main()
{
    int a = 2, b = 3;
    cout << "Value of a is : " << a << endl;
    cout << "Value of b is : " << b << endl;
    cout << "Product of a and b is : " << product(a, b) << endl;
    cout << "Product of a and b is : " << product(a) << endl; // using default Argument

    return 0;
}