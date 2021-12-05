#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int a, b, c, d, x, y, z, n, count;
    string s, sans;
    cin >> n;
    vector<int> data(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
    }

    sans = "APPROVED";
    rep(i, n)
    {
        if (i % 2 == 0)
        {
            if (data[i] % 3 != 0 || data[i] % 5 != 0)
            {
                sans = "DENIED";
            }
        }
    }

    cout << sans << endl;
    return 0;
}