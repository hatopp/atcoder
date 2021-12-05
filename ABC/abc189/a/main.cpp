#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n;
    string s;
    cin >> s;
    string ans = "Lost";

    if (s[0] == s[1] && s[1] == s[2])
    {
        ans = "Won";
    }
    cout << ans << endl;
    return 0;
}