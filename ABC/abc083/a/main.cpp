#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a >> b >> c >> d;
    sans = "Left";
    if (a + b == c + d)
    {
        sans = "Balanced";
    }
    else if (a + b < c + d)
    {
        sans = "Right";
    }
    cout << sans << endl;
    return 0;
}