#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> s;
    sans = "No";

    if (s[2] == s[3] && s[4] == s[5])
    {
        sans = "Yes";
    }

    cout << sans << endl;
    return 0;
}