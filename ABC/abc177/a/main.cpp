#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a >> b >> c;

    sans = "No";
    if ((a + c - 1) / c <= b)
    {
        sans = "Yes";
    }

    cout << sans << endl;
}