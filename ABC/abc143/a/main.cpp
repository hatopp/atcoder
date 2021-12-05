#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a >> b;
    ans = 0;
    if (a - b - b > 0)
    {
        ans = a - 2 * b;
    }
    cout << ans << endl;
    return 0;
}