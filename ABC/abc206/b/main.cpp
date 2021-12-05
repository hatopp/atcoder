#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if ((1 + i) * i / 2 >= n)
        {
            cout << i << endl;
            return 0;
        }
    }
}