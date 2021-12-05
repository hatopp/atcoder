#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a >> b;
    ans = b;

    if (a <= 5)
    {
        ans = 0;
    }
    else if (a <= 12)
    {
        ans = b / 2;
    }

    cout << ans << endl;
    return 0;
}