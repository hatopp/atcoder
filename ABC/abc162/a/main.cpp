#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> s;
    sans = "No";

    for (int i = 0; i < 3; i++)
    {
        if (s[i] == '7')
        {
            sans = "Yes";
        }
    }
    cout << sans << endl;
    return 0;
}