#include <iostream>
using namespace std;

int main()
{
    // & = address of operator
    // * = dereference operator

    int a = 3;
    int *b = &a;

    cout << "The address of a is &a = " << &a << endl;
    cout << "The value of a is *b = " << *b << endl;
    cout << "The value at &a is *&a = " << *&a << endl;
    
    return 0;
}