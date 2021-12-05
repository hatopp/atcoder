#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n >> a >> x >> y;

    ans = n * x;

    if (n > a)
    {
        ans = a * x + (n - a) * y;
    }

    cout << ans << endl;
    return 0;
}