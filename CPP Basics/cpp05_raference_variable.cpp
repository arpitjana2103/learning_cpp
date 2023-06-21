#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int &b = a;

    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;

    a = 100;

    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;

    b = 122;

    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;

    return 0;
}