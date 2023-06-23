#include <iostream>
#include <vector>
using namespace std;

// Function Prototypes
void func1(auto &);
void func2(vector<int> *);

int main()
{
    vector<int> vec = {5, 8};

    // create REFERENCE-VARIABLE of the vector
    auto &refVec = vec;

    // Accessing the values of the vector with REFERENCE-VARIABLE
    cout << "vec[0] : refVec[0] : " << refVec[0] << endl;

    // create POINTER-VARIABLE of the vector
    vector<int> *ptVec = &vec;

    // Accessing the values of the vector with POINTER-VARIABLE
    cout << "vec[0] : (*ptVec)[0] : " << (*ptVec)[0] << endl;
    cout << "vec[1] : (*ptVec)[1] : " << (*ptVec)[1] << endl;

    // Passing Vector into a function
    func1(vec);
    func2(&vec);

    return 0;
}

void func1(auto &vec)
{
    cout << "func1 : vec[0] : " << vec[0] << endl;
}

void func2(vector<int> *vec)
{
    cout << "func2 : (*vec)[0] : " << (*vec)[0] << endl;
}