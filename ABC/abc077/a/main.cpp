#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int n = 3;
    bool f = true;

    if (s[0] != t[2] || s[1] != t[1] || s[2] != t[0])
    {
        f = false;
    }

    string byn;
    if (f == true)
    {
        byn = "YES";
    }
    else
    {
        byn = "NO";
    }
    cout << byn << endl;
    return 0;
}