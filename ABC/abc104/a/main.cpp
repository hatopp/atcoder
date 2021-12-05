#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a;

    sans = "AGC";

    if (a < 2800)
    {
        sans = "ARC";
    }
    if (a < 1200)
    {
        sans = "ABC";
    }
    cout << sans << endl;
    return 0;
}