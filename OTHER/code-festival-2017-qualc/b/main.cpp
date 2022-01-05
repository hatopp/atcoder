#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    ll ans = pow(3, n);
    ll gu = 1;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            gu *= 2;
        }
    }
    cout << ans - gu << endl;
    return 0;
}
