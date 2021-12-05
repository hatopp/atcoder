#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> s;

    sans = "Yes";

    if (s[0] == s[1] && s[1] == s[2])
    {
        sans = "No";
    }
    cout << sans << endl;
    return 0;
}