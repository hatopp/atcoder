#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n;
    vector<pair<int, int>> data(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        data[i] = make_pair(a, i);
    }

    sort(data.begin(), data.end());

    // cout << data[n-2].first << endl;
    cout << data[n - 2].second + 1 << endl;

    return 0;
}
