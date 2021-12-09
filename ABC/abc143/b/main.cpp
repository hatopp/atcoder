#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n;

    vector<int> data(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
    }

    ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ans += data[i] * data[j];
        }
    }

    cout << ans << endl;
    return 0;
}
