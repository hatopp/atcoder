--#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int count = 3;
    if (a == b)
    {
        count--;
    }
    if (a == c)
    {
        count--;
    }
    if (b == c)
    {
        count--;
    }
    if (a == b && b == c)
    {
        count=1;
    }

    cout << count << endl;
    return 0;
}