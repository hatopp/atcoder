#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, t, sans;

    sans = "No";

    cin >> s;
    t = s.substr(0, 3);

    if (s.size() >= 3)
    {
        for (int i = 3; i < s.size() / 3; i = i + 3)
        {
            if (s[i] == s[0] && s[i + 1] == s[1] && s[i + 2] == s[2])
            {
                sans = "Yes";
            }
            else
            {
                sans = "No";
            }
        }
        s = s.substr(s.size() / 3 * 3, s.size() % 3);
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[i])
        {
            sans = "Yes";
        }
        else if (s[i] != t[i])
        {
            sans = "No";
        }
    }

t.size()=b;
    if (t.size() == 3)
    {
        if (t != "xox" || t != "xxo" || t != "oxx")
        {
            sans = "No";
        }
        else
        {
            sans = "Yes";
        }
    }

    if (t.size() == 2)
    {
        if (t == "oo")
        {
            sans = "No";
        }
        else
        {
            sans = "Yes";
        }
    }

    cout << sans << endl;
    return 0;
}