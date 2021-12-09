#include <bits/stdc++.h>
using namespace std;

/*
int ctoi(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    return 0;
}

int main()
{
    long long int x, y, z, n, ab;
    string a, b, sab, sans;
    cin >> a >> b;

    sans = "Easy";

    ab = stoll(a) + stoll(b);
    sab = to_string(ab); // sab = string a+b
    x = sab.length();

    ostringstream sa, sb;
    sa << setfill('0') << setw(x) << a;
    sb << setfill('0') << setw(x) << b;

    a = sa.str();
    b = sb.str();

    for (int i = x - 1; i >= 0; i--)
    {

        int ia = ctoi(a[i]);
        int ib = ctoi(b[i]);
        int iab = ctoi(sab[i]);

        if (ia + ib != iab)
        {
            sans = "Hard";
        }
    }

    cout << sans << endl;
    return 0;
}
*/

int main()
{
    string a, b;

    cin >> a >> b;
    string re_a(a.rbegin(), a.rend());
    string re_b(b.rbegin(), b.rend());

    int n = min(a.length(), b.length());

    string sans = "Easy";
    for (int i = 0; i < n; i++)
    {
        if ((re_a[i] - '0') + (re_b[i] - '0') >= 10)
        {
            sans = "Hard";
        }
    }
    cout << sans << endl;
    return 0;
}
