#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    vector<int> v;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i);
        }
    }

    sort(v.begin(), v.end());
    int s = v.size();
    int ans;

    if (s % 2 == 1) {
        ans = v[s / 2];
    } else if (s == 2) {
        ans = v[1];
    } else {
        ans = v[s / 2 - 1];
    }
    cout << ans << endl;
    return 0;
}