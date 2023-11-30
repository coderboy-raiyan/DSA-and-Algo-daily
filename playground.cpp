#include <bits/stdc++.h>

using namespace std;

int arr[105];

int main()
{
    string ss;
    cin >> ss;
    for (char i = 0; i < ss.length(); i++)
    {
        arr[ss[i]]++;
    };
    bool isRep = false;
    for (int i = 0; i <= 100; i++)
    {
        if (arr[i] == 1)
        {
            isRep = false;
        }
        else
        {
            if (arr[i] != 0)
            {
                isRep = true;
                break;
            }
        }
    };
    if (isRep)
    {
        for (int i = 0; i <= 100; i++)
        {
            if (arr[ss[i]] == 1)
            {
                cout << i << endl;
                break;
            }
        };
    }
    else
    {
        cout << -1;
    }

    return 0;
}
