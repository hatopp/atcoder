#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n;
    ans = 0;
    if (n % 1000 != 0)
    {
        ans = ((n / 1000) + 1) * 1000 - n;
    }
    cout << ans << endl;
    return 0;
}