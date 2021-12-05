#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a >> b;

    ans = a + b;
    if (ans >= 24)
    {
        ans = ans - 24;
    }
    cout << ans << endl;
    return 0;
}
