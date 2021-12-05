#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n;
    string s;
    cin >> a >> b;
    int ans = 0;

    if (2 * a + 100 > b)
    {
        ans = 2 * a + 100 - b;
    }
    cout << ans << endl;
    return 0;
}