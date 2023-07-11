#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(5);
    // v = { 1, 2, 5 }

    vector<int> v1(5);
    // v2 = { 0, 0, 0, 0, 0 }

    vector<int> v2(5, 100);
    // v3 = { 100, 100, 100, 100, 100 }

    // access the values in vector
    cout << v[0] << endl;

    return 1;
}