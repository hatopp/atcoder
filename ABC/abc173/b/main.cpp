#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "AC")
        {
            a++;
        }
        if (s == "WA")
        {
            b++;
        }
        if (s == "TLE")
        {
            c++;
        }
        if (s == "RE")
        {
            d++;
        }
    }

    cout << "AC x " << a << endl;
    cout << "WA x " << b << endl;
    cout << "TLE x " << c << endl;
    cout << "RE x " << d << endl;
    return 0;
}