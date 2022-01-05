#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    ll wa = 0;
    for (int i = 0; i < n; i++) {
        wa += v[i];
    }
    cout << wa << endl;

    ll ans = 0;
    int b = wa / 4 / m;
    for (int i = 0; i < n; i++) {
        if (v[i] > b) {
            ans++;
        }
    }
    cout << b << endl;
    cout << ans << endl;
    if (ans >= m) {
        cout << "Yes" << endl;
        return 0;
    } else {
        cout << "No" << endl;
        return 0;
    }
}
