#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> s;
    ans = 6;

    if (s[0] == s[1] || s[1] == s[2] || s[0] == s[2])
    {
        ans = 3;
    }
    if (s[0] == s[1] && s[1] == s[2])
    {
        ans = 1;
    }

    cout << ans << endl;
    return 0;
}