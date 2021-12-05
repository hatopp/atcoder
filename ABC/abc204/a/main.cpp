#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n;
    string s;
    cin >> x >> y;
    int ans = 3 - x - y;

    if (x == y)
    {
        ans = x;
    }
    cout << ans << endl;
    return 0;
}