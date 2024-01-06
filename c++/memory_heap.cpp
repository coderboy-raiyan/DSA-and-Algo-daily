#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 10;
    int *ptr_a = &a;
    int **ptr_ptr_a = &ptr_a;

    cout << **ptr_ptr_a;

    return 0;
}
