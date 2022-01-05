#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, k;
    cin >> n >> k;
    ll ans = 1;

    for (int i = 0; i < n; i++) {
        if (ans < k) {
            ans += ans;
        } else {
            ans += k;
        }
    }
    cout << ans << endl;
    return 0;
}