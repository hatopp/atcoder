#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, s, y, z, n, count, ans;
    string sans;
    cin >> n >> s >> d;

    sans = "No";
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        if (x < s && y > d)
        {
            sans = "Yes";
        }
    }
    cout << sans << endl;
    return 0;
}