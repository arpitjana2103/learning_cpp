#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

bool hashh[2][MAX + 1];

void insert(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int row = arr[i] >= 0 ? 1 : 0;
        int col = abs(arr[i]);
        hashh[row][col] = 1;
    }
}

bool search(int val)
{
    int row = val >= 0 ? 1 : 0;
    int col = abs(val);
    return hashh[row][col];
}

int main()
{
    int arr[] = {-1, 5, -2};
    insert(arr, 3);
    cout << "val = 5 : " << search(5) << endl;
    cout << "val = 6 : " << search(6) << endl;
    cout << "val = -2 : " << search(-2) << endl;
    return 0;
}