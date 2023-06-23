#include <iostream>
using namespace std;

int main()
{

    int marks[] = {23, 45, 78};

    cout << "Value of marks[0] : " << marks[0] << endl;
    cout << "Value of marks[1] : " << marks[1] << endl;
    cout << "Value of marks[2] : " << marks[2] << endl;

    // Accessing Marks value using Pointer : 

    int *ptr = marks;

    cout << "Value of marks[0] : " << ptr[0] << endl;
    cout << "Value of marks[1] : " << *ptr++ << endl;
    cout << "Value of marks[2] : " << *ptr++ << endl;

    return 0;
}