#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(5);
    // { 5 }
    pq.push(2);
    // { 5, 2 }
    pq.emplace(10);
    // { 10, 5, 2 }

    cout << pq.top() << endl;
    // 10

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pqmh;
    pqmh.push(5);
    // { 5 }
    pqmh.push(2);
    // { 2, 5 }
    pqmh.push(9);
    // { 2, 5, 9 }

    cout << pqmh.top() << endl;
    // 2

    return 0;
}