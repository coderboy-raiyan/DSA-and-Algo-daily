#include <bits/stdc++.h>

using namespace std;

void reverseStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    };
    int x = s.top();
    s.pop();
    reverseStack(s);

    stack<int> cp;
    while (!s.empty())
    {
        cp.push(s.top());
        s.pop();
    };
    cp.push(x);
    while (!cp.empty())
    {
        s.push(cp.top());
        cp.pop();
    }
}
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    reverseStack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
