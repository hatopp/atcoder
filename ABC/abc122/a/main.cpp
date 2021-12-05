#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string t, sans;
    char s, cans;
    cin >> s;
    t = "ACGT";
    cans = 'A';

    for (int i = 0; i < 4; i++)
    {
        if (t[i] == s)
        {
            cans = t[3 - i];
        }
    }

    cout << cans << endl;
    return 0;
}
