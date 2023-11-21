#include <bits/stdc++.h>

using namespace std;

class MyList
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    };
    void pop()
    {
        l.pop_back();
    };
    int top()
    {
        return l.back();
    };
    int size()
    {
        return l.size();
    };
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    MyList st;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    };
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
