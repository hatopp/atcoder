#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a >> b;

    ans = b - a;
    if (b % a == 0)
    {
        ans = a + b;
    }

    cout << ans << endl;
    return 0;
}