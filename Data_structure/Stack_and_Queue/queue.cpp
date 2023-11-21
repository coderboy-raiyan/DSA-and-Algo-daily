#include <bits/stdc++.h>

using namespace std;

class MyQueue
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    };

    void pop()
    {
        l.pop_front();
    };

    int front()
    {
        return l.front();
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
    MyQueue q;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        q.push(val);
    };

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
