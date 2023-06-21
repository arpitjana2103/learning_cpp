#include <iostream>
using namespace std;

int main(){
    float f = 34.4F;
    double d = 34.4;
    long double ld = 34.4L;
    cout << "The size of 34.4F is : " << sizeof(34.4F) << endl;
    cout << "The size of 34.4 is : " << sizeof(34.4) << endl;
    cout << "The size of 34.4L is : " << sizeof(34.4L) << endl;
    return 0;
}