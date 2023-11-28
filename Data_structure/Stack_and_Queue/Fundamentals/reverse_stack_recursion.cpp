#include <bits/stdc++.h>

using namespace std;

void reverseStack(stack<int> &st)
{
    if (st.empty())
        return;
    int tmp = st.top();
    st.pop();
    reverseStack(st);

    stack<int> cp;
    while (!st.empty())
    {
        cp.push(st.top());
        st.pop();
    };
    cp.push(tmp);
    while (!cp.empty())
    {
        st.push(cp.top());
        cp.pop();
    };
};

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
    };
    reverseStack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
