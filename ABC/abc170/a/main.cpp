#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a >> b >> c >> d >> x;
    ans = 1;
    if (b == 0)
    {
        ans = 2;
    }
    if (c == 0)
    {
        ans = 3;
    }
    if (d == 0)
    {
        ans = 4;
    }
    if (x == 0)
    {
        ans = 5;
    }

    cout << ans << endl;
    return 0;
}