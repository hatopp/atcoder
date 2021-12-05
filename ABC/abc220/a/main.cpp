#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;

    cin >> a >> b >> c;
    ans = -1;
    if (a == b && a % c == 0)
    {
        ans = a;
    }

    if ((b / c) != (a / c))
    {
        ans = b / c * c;
    }
    cout << ans << endl;
    return 0;
}


