#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a >> b >> c;
    sans = "No";
    if (a == b || b == c || a == c)
    {
        sans = "Yes";
    }
    if (a == b && b == c)
    {
        sans = "No";
    }
    cout << sans << endl;
    return 0;
}