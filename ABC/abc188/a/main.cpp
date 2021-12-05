#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n;
    string s;
    cin >> x >> y;
    string ans = "No";

    if (max(x, y) - min(x, y) < 3)
    {
        ans = "Yes";
    }
    cout << ans << endl;
    return 0;
}