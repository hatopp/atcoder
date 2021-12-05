#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a >> s;

    sans = s;

    if (a < s.size())
    {
        sans = s.erase(a, s.size()) + "...";
    }

    cout << sans << endl;
    return 0;
}