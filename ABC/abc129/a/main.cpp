#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a>>b>>c;

    ans = min({a+b,b+c,a+c});
    cout << ans << endl;
    return 0;
}