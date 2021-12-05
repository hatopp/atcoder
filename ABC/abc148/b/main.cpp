#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int a, b, c, d, x, y, z, n, count;
    string t, s, sans;
    cin >> n >> s >> t;

    rep(i, n-1)
    {
        cout << s[i] << t[i];
    }
    cout << s[n-1] << t[n-1] << endl;
    return 0;
}
