#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    st.top();
    st.size();
    st.empty();
    st.pop();

    stack<int> st1;
    st1.swap(st);
}