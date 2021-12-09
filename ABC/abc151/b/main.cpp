#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, k, m, count, ans;
    string s, sans;
    cin >> n >> k >> m;

    a = 0;

    vector<int> data(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
        a += data[i];
    }

    if (m * n <= a)
    {
        ans = 0;
    }

    else if (m * n - a > k || m * n - a < 0)
    {
        ans = -1;
    }

    else
    {
        ans = m * n - a;
    }

    cout << ans << endl;
    return 0;
}