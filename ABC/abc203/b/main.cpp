#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n >> a;

    ans = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            ans += 100 * i + j;
        }
    }
    cout << ans << endl;
    return 0;
}