#include <iostream>
using namespace std;

// Function Prototype
int product(int, int);
int sum(int, int);
string joinString(string, string);
string strigArr(int [], int);
int *returnPtr(int);
void greet(void);

int main()
{
    int arr[] = {12, 10, 5};
    cout << sum(5, 8) << endl;
    cout << product(5, 8) << endl;
    cout << joinString("Hello ", "World") << endl;
    cout << strigArr(arr, 3) << endl;
    cout << *returnPtr(5) << endl;
    greet();
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int product(int a, int b)
{
    int c = a * b;
    return c;
}

string strigArr(int arr[], int size)
{
    string ans = "";
    for (int i = 0; i < size; i++)
    {
        ans += to_string(arr[i]) + " ";
    }
    return ans;
}

string joinString(string s1, string s2)
{
    return s1 + s2;
}

int *returnPtr(int a)
{
    int *ptr = new int(a);
    return ptr;
}

void greet()
{
    cout << "Hello !" << endl;
}