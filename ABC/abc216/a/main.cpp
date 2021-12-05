#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, z, n, count, ans;
    string s, sans;
    cin >> s;
    char y = s.back()-'0';
    s.pop_back();
    s.pop_back();

    if (y <= 2)
    {
        s += '-';
    }
    else if (y >= 7)
    {
        s += '+';
    }

    cout << s << endl;
    return 0;
}
