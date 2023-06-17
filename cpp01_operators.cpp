#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 2;
    cout << "\n\nFollwing are the types of operators in C++" << endl;

    // Arithmatic Operators
    cout << "\nARITHMATIC OPERATORS :\n\n";
    cout << "a = " << a << " b = " << b << endl;
    cout << "The value of a + b is : " << a + b << endl;
    cout << "The value of a - b is : " << a - b << endl;
    cout << "The value of a * b is : " << a * b << endl;
    cout << "The value of a / b is : " << a / b << endl;
    cout << "The value of a % b is : " << a % b << endl;
    cout << "The value of a --  is : " << a-- << endl;
    cout << "The value of a ++  is : " << a++ << endl;
    cout << "The value of ++ a  is : " << ++a << endl;
    cout << "The value of -- a  is : " << --a << endl;

    
    // Comparison Operators
    cout << "\nCOMPARISON OPERATORS :\n\n";
    cout << "a = " << a << " b = " << b << endl;
    cout << "The value of a == b is : " << (a==b) << endl;
    cout << "The value of a != b is : " << (a!=b) << endl;
    cout << "The value of a >= b is : " << (a>=b) << endl;
    cout << "The value of a <= b is : " << (a<=b) << endl;
    cout << "The value of a < b is : " << (a<b) << endl;
    cout << "The value of a > b is : " << (a>b) << endl;

    return 0;
}
