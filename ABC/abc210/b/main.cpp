#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n >> s;
    sans = "Aoki";

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1' && i % 2 == 0)
        {
            sans = "Takahashi";
            break;
        }
    }

    cout << sans << endl;
    return 0;
}