#include <bits/stdc++.h>
using namespace std;

template <typename T>
bool chmin(T &a, const T &b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}

int INF = 0x3fffffff;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int ans = INF;

    for (int i = 1; i < n; i++)
    {
        v[i] += v[i - 1];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int mae = v[i];
        int ato = v[n - 1] - mae;
        chmin(ans, abs(mae - ato));
    }

    cout << ans << endl;
}
