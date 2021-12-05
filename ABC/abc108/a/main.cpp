#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a;

    if (a % 2 == 0)
    {
        ans = a / 2 * a / 2;
    }
    else if (a % 2 == 1)
    {
        ans = a / 2 * (a / 2 + 1);
    }

    cout << ans << endl;
    return 0;
}