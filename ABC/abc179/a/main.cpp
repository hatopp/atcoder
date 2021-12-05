#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> s;

    if (s.back() != 's')
    {
        s = s + 's';
    }
    else
    {
        s = s + "es";
    }

    cout << s << endl;
    return 0;
}