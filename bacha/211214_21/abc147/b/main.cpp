#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ct = 0;
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - 1 - i])
        {
            ct++;
        }
    }
    cout << ct << endl;
    return 0;
}