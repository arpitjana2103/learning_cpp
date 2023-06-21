#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This will not swap a & b
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference using Pointers
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using C++ Reference Variables
void swapRefVal(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main()
{
    cout << "The Sum of 4 and 5 is : " << sum(4, 5) << endl;

    int a = 5;
    int b = 4;

    swap(a, b);
    //⛔ a = 5 , b = 4

    swapPointer(&a, &b);
    //✅ a = 4 , b = 5

    swapRefVal(a, b);
    //✅ a = 5 , b = 4

    
    return 0;
}