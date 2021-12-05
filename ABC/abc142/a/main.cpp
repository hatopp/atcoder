#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n;
    double dans;
    dans = (n / 2) / double(n);
    if (n % 2 == 1 && n != 1)
    {
        dans = (n + 1) / 2 / double(n);
    }

    if (n == 1)
    {
        dans = 1;
    }

    cout << dans << endl;
    return 0;
}
