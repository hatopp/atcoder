#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a >> b;
    ans = max({a + b, a - b, a * b});
    cout << ans << endl;
    return 0;
}