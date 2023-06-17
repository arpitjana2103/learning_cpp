#include <iostream>
using namespace std;

int main()
{

    // IMPLICIT CONVERSION
    int my_int = 2.5;
    double my_double = 2;
    cout << "The value of my_int is : " << my_int << endl;
    cout << "The value of my_double is : " << my_double << endl;

    // EXPLICIT CONVERSION
    // SYNTAX : data_type(expression)
    cout << "DOUBLE to INT >> int(2.5) : " << int(2.5) << endl;
    cout << "INT to DOUBLE >> double(2) : " << double(2) << endl;
    cout << "BOOL to INT >> int(true) : " << int(true) << endl;
    cout << "INT to BOOL >> bool(25) : " << bool(25) << endl;

    return 0;
}