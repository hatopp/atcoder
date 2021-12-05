#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, t, sans;
    cin >> s >> t;

    sans = "No";
    if (s == "##" || t == "##")
    {
        sans = "Yes";
    }
    if (s[0] == '#' && t[0] == '#')
    {
        sans = "Yes";
    }

    if (s[1] == '#' && t[1] == '#')
    {
        sans = "Yes";
    }

    cout << sans << endl;
    return 0;
}
