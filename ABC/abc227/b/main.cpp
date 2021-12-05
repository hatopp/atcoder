#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int a, b, c, d, x, y, z, n, count;
    string s, sans;
    cin >> n;
    count = n;
    rep(i, n)
    {
        cin >> a;
        for (int i = 1; i <= 1000; i++)
        {
            if ((a - i * 3) % (i * 4 + 3) == 0 && a - i * 3 > 0)
            {
                count--;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}
