#include <bits/stdc++.h>
using namespace std;
typedef long long lli;

lli isgcd(lli x, lli y)
{
    if (y == 0)
    {
        return x;
    }
    return isgcd(y, x % y);
}

lli ans;
lli islcm(lli x, lli y)
{
    lli g = isgcd(x, y);
    if (g == x || g == y)
    {
        ans = g;
    }
    ans = x / g * y;
    return ans;
}

int main(void)
{
    lli n, A[100009];
    lli ans = 1;
    cin >> n;
    for (lli i = 1; i < n + 1; i++)
    {
        cin >> A[i];
        ans = islcm(A[i], ans);
    }

    cout << ans << endl;
    return 0;
}
