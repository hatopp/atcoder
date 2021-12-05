#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, t, sans;
    cin >> s >> t;
    ans = 0;

    for (int i = 0; i < 3; i++)
    {
        if (s[i] == t[i])
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
