#include <bits/stdc++.h>
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    stack<int> cmp;
    while (!myStack.empty())
    {
        cmp.push(myStack.top());
        myStack.pop();
    };
    cmp.push(x);
    while (!cmp.empty())
    {
        myStack.push(cmp.top());
        cmp.pop();
    }
    return myStack;
}
