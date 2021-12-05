#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> s;
    count = 0;

    for (int i = 0; i < 3; i++)
    {
        if (s[i] == 'o')
        {
            count++;
        }
    }

    cout << 700 + 100 * count << endl;
    return 0;
}
