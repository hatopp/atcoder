#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> c;
    cin >> a >> b;

    sans = "NG";

    if ((b / c - a / c) > 0 || b % c == 0 || a % c == 0)
    {
        sans = "OK";
    }

    cout << sans << endl;
    return 0;
}