#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a >> b >> c;
    sans = "bust";
    if (a + b + c <= 21)
    {
        sans = "win";
    }
    cout << sans << endl;
    return 0;
}
