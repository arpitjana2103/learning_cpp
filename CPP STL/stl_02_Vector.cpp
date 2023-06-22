#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}

int main()
{
    vector<int> vec1;
    vector<char> vec2(10);
    

    vec1.push_back(5);
    vec1.push_back(14);
    vec1.push_back(18);

    vec1.pop_back();

    // Iterator
    vector<int>::iterator itr = vec1.begin();

    vec1.insert(itr + 1, 566);
    vec1.insert(itr + 1, 5, 500);

    display(vec1);

    return 0;
}