#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;

    if (a == b && b == c)
    {
        ans = a;
    }
    if (a == b)
    {
        ans = c;
    }
    if (a == c)
    {
        ans = b;
    }
    if (b == c)
    {
        ans = a;
    }

    cout << ans << endl;
    return 0;
}
