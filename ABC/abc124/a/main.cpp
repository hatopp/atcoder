#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a >> b;
    if (max(a, b) - min(a, b) >= 2)
    {
        ans = max(a, b) * 2 - 1;
    }
    else
    {
        ans = a + b;
    }
    cout << ans << endl;
    return 0;
}