#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    // dq = { 1, 2 }

    dq.push_front(0);
    dq.emplace_front(-1);
    // dq = { -1, 0, 1, 2 }

    dq.pop_back();
    dq.pop_front();
    // dq = { 0, 1 };

    dq.front(); // 0;
    dq.back();  // 1;

    // Rest All functions are same as vector
    // begin, end, insert, size, swap etc.
    return 0;
}