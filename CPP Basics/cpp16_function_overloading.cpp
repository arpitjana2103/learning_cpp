#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}

int main()
{
    cout << "Sum of 1 + 2 : " << add(1, 2) << endl;
    cout << "Sum of 1 + 2 + 3 : " << add(1, 2, 3) << endl;
    return 0;
}