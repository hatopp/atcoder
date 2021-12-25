#include <bits/stdc++.h>
using namespace std;

long long isgcd(long long x, long long y)
{
    while (x > 0 && y > 0)
    {
        if (x >= y)
        {
            x = x % y;
        }
        else
        {
            y = y % x;
        }
    }
    if (x >= 1)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main(void)
{
    long long n, ans, A[100009];
    cin >> n;

    for (long long i = 1; i <= n; i++)
    {
        cin >> A[i];
    }

    ans = isgcd(A[1], A[2]);
    for (long long i = 3; i < n + 1; i++)
    {
        ans = isgcd(ans, A[i]);
    }
    cout << ans << endl;
}
