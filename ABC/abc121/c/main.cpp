#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    ll ans = 0;

    for (int i = 0; i < n; i++) {
        if (m - v[i].second >= 0) {
            ans += v[i].first * v[i].second;
            m -= v[i].second;
        } else {
            ans += v[i].first * m;
            cout << ans << endl;
            return 0;
        }
    }
    cout << ans << endl;
    return 0;
}