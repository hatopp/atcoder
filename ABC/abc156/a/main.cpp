#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, r;
    string s;
    cin >> n >> r;

    int ans = r;
    if (n < 10)
    {
        ans = r + 100 * (10 - n);
    }
    cout << ans << endl;
    return 0;
}