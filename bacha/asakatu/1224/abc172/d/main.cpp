#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll kosuu(ll n) {
    vector<int> x(n + 1);
    ll num = n;
    ll cnt = 1;

    for (ll i = 2; i <= n; i++) {
        while (num % i == 0) {
            x.at(i)++;
            num /= i;
        }
    }
    for (ll i = 2; i <= n; i++) {
        cnt *= x.at(i) + 1;
    }
    return cnt;
}

int main() {
    ll n;
    cin >> n;
    ll ans = 0;

    for (ll k = 1; k <= n; k++) {
        ans += k * kosuu(k);
    }
    cout << ans << endl;
    return 0;
}