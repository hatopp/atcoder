#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());

    int ans = v[0] / 2;

    for (int i = 1; i < n; i++)
    {
        ans += v[i];
    }

    cout << ans << endl;
    return 0;
}