#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    bool f = false;

    if (s[0] == s[1] && s[2] == s[3] && s[0] != s[3])
    {
        f = true;
    }
    string sans;

    if (f == true)
    {
        sans = "Yes";
    }
    else
    {
        sans = "No";
    }

    cout << sans << endl;
    return 0;
}