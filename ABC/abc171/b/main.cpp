#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n >> a;

    ans = 0;
    vector<int> data(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
    }

    sort(data.begin(), data.end());

    for (int i = 0; i < a; ++i)
    {
        ans += data[i];
    }

    cout << ans << endl;
    return 0;
}
