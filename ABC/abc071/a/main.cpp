#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> x >> a >> b;
    c = abs(x - a);
    d = abs(x - b);

    sans = "A";
    if (c > d)
    {
        sans = "B";
    }

    cout << sans << endl;
    return 0;
}