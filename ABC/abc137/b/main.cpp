#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> k >> x;

    a = max(-1000000, x - k);
    b = min(1000000, x + k);

    for (int i = a + 1; i < b + 1; i++)
    {
        cout << i;
        if (i != b)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }

    return 0;
}
