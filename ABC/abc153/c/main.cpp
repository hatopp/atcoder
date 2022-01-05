#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (ll i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    ll ans = 0;
    n -= k;
    for (ll i = 0; i < n; i++) {
        ans += v[i];
    }
    cout << ans << endl;
    return 0;
}
