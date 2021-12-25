#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, ka, kb;
    cin >> n;
    ka = 0;
    kb = 0;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        ka += a[i];
    }

    vector<ll> b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
        kb += b[i];
    }

    cout << (float)ka * 1 / 3 + (float)kb * 2 / 3 << endl;
    return 0;
}
