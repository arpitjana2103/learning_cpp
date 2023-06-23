#include <iostream>
using namespace std;

// Function Prototypes
void func1(auto &);
void func2(int *);

int main()
{
    int arr[] = {5, 8};

    // create REFERENCE-VARIABLE of the array
    int(&refArr)[2] = arr;
    auto &refArr2 = arr;

    // Accessing the values of the array with REFERENCE-VARIABLE
    cout << "arr[0] : refArr[0] : " << refArr[0] << endl;
    cout << "arr[0] : refArr2[0] : " << refArr2[0] << endl;

    // create POINTER-VARIABLE of the array
    int *ptArr = arr;

    // Accessing the values of the array with POINTER-VARIABLE
    cout << "arr[0] : ptArr[0] : " << ptArr[0] << endl;
    cout << "arr[0] : *(ptArr + 0) : " << *(ptArr + 0) << endl;
    cout << "arr[1] : *(ptArr + 1) : " << *(ptArr + 1) << endl;

    // Passing Array into a function
    func1(arr);
    func2(arr);

    return 0;
}

void func1(auto &arr)
{
    cout << "func1 : arr[0] : " << arr[0] << endl;
}

void func2(int *arr)
{
    cout << "func2 : arr[0] : " << arr[0] << endl;
}