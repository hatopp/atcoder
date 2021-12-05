#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a >> b >> c;
    ans = 0;
    if (c - a + b > 0)
    {
        ans = c - (a - b);
    }
    cout << ans << endl;
    return 0;
}