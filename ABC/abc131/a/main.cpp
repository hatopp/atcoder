#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> s;

    sans = "Good";

    for (int i = 0; i < 3; i++)
    {
        if (s[i] == s[i + 1])
        {
            sans = "Bad";
            break;
        }
    }

    cout << sans << endl;
    return 0;
}