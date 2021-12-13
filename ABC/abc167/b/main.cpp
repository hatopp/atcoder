#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    int ans = a;
    if (a >= k)
    {
        ans = k;
    }
    else if (a + b >= k)
    {
        ans = a;
    }
    else //
    {
        ans = ans - (k - a - b);
    }

    cout << ans << endl;
    return 0;
}
