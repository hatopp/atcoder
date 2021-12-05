#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, t, sans, u;
    cin >> s >> t >> a >> b >> u;

    if (u == s)
    {
        a = a - 1;
    }
    else if (u == t)
    {
        b = b - 1;
    }
    cout << a << " " << b << endl;
    return 0;
}
