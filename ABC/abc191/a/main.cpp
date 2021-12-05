#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, v, t, s, c, d, x, y, z, n, count, ans;
    string sans;
    cin >> v >> t >> s >> d;
    sans = "Yes";

    if (t * v <= d && s * v >= d)
    {
        sans = "No";
    }
    cout << sans << endl;
    return 0;
}
