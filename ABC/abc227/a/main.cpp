#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, k, count, ans;
    string s, sans;
    ans =0;
    cin >> n >> k >> a;
    ans = (a + k - 1) % n;
    if(ans == 0) ans = n;
    cout << ans << endl;
    return 0;
}