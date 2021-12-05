#include <bits/stdc++.h>
using namespace std;

bool IsAlphabetNumericSymbol(string src)
{
    regex pattern("^[a-zA-Z0-9!-/:-@\[-`{-~]+$");
    smatch sm;
    if (regex_match(src, sm, pattern))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, t, sans;
    cin >> s >> t;

    sans = "No";

    if (IsAlphabetNumericSymbol(t) == true && t.size() - s.size() == 1 && 1 <= s.size() && s.size() <= 10)
    {
        if (s == t.substr(0, s.size()))
        {
            sans = "Yes";
        }
    }

    cout << sans << endl;
    return 0;
}
