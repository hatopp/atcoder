#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int ct = 0;
    for (int i = a; i <= b; i++)
    {
        if (c % i == 0)
        {
            ct++;
        }
    }
    cout << ct << endl;
    return 0;
}