#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n >> x >> s;
    ans = x;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x' && ans > 0)
        {
            ans--;
        }
        if (s[i] == 'o')
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
