#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// Step by Step Calculation of Factorial 5 :
// factorial(5) = 5 * factorial(4);
// factorial(5) = 5 * 4 * factorial(3);
// factorial(5) = 5 * 4 * 3 * factorial(2);
// factorial(5) = 5 * 4 * 3 * 2 * factoraial(1);
// factorial(5) = 5 * 4 * 3 * 2 * 1

int fibonacci(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int fibonacci2(int n)
{
    if (n <= 1)
        return 1;

    int prev = 1;
    int curr = 1;

    while (n > 1)
    {
        int next = prev + curr;
        prev = curr;
        curr = next;
        n--;
    }
    return curr;
}

int main()
{
    cout << "The factorial of 5 is : " << factorial(5) << endl;
    cout << fibonacci(3) << endl;
    cout << fibonacci2(3) << endl;
    return 0;
}
