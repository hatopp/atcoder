#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    ll a, b, c, d;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    cin >> n;

    ll v[200009];
    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 100) a++;
        if (v[i] == 200) b++;
        if (v[i] == 300) c++;
        if (v[i] == 400) d++;
    }
    // for (int i=0; i<4; i++) {cout << A[i] << endl;}

    ll ans = 0;
    if (a >= 1 && d >= 1)
    {
        ans += a * d;
    }
    if (b >= 1 && c >= 1)
    {
        ans += b *c;
    }
    cout << ans << endl;
    return 0;
}
