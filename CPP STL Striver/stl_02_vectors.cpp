#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    //----------------------------------------------------------------------------- PUSH VALUE TO VECTOR
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    // v = { 1, 2, 5 }

    vector<int> v1(5);
    // v2 = { 0, 0, 0, 0, 0 }

    vector<int> v2(2, 40);
    // v3 = { 40, 40 }

    // access the values in vector
    cout << v[0] << endl;

    //----------------------------------------------------------------------------- ITERATORS IN VECTOR
    // v = { 1, 2, 5 }
    vector<int>::iterator it = v.begin();
    cout << *(it) << endl;
    it++;
    cout << *(it) << endl;

    vector<int>::iterator it2 = v.end();
    it2--;
    // cout << *(it2) << endl;

    //----------------------------------------------------------------------------- PRINT THE VECTOR
    // Methode 1
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    // Method 2
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    // Method 3
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    //----------------------------------------------------------------------------- ERESE VECTOR ELEMENTS
    // v = { 1, 2, 3, 4, 5 }
    cout << endl;
    v.erase(v.begin() + 1);
    v.erase(v.begin() + 1);
    v.erase(v.begin() + 1);

    //----------------------------------------------------------------------------- INSERT VECTOR ELEMENTS
    v.insert(v.begin(), 300);
    // v = { 300, 1, 2, 3, 4, 5 }

    v.insert(v.begin() + 1, 2, 10);
    // v = { 300, 10, 10, 1, 2, 3, 4, 5 }

    // Insert Vector Inside Vector
    // v = { 300, 10, 10, 1, 2, 3, 4, 5 }
    // v2 = { 40, 40 }
    v.insert(v.begin(), v2.begin(), v2.end());
    // v = { 40, 40, 300, 10, 10, 1, 2, 3, 4, 5 }

    //----------------------------------------------------------------------------- VECTOR SIZE
    cout << v.size();
    // v = { 40, 40, 300, 10, 10, 1, 2, 3, 4, 5 }
    v.pop_back(); // Return : { 5 }
    // v = { 40, 40, 300, 10, 10, 1, 2, 3, 4 }
    // v2 = { 40, 40 }
    v.swap(v2);
    // v = { 40, 40 }
    // v2 = { 40, 40, 300, 10, 10, 1, 2, 3, 4 }
    v.clear();
    // v = { }
    cout << v.empty();
    // output : true

    return 0;
}