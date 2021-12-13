#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, k, s, t;
    cin >> a >> b >> c >> k >> s >> t;

    int ans = a * s + b * t;
    if (k <= s + t)
    {
        ans = ans - c * (s + t);
    }

    cout << ans << endl;
    return 0;
}
