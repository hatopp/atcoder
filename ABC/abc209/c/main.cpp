#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    ll ans = 1;

    sort(c.begin(), c.end());

    for (int i = 0; i < n; i++) {
        ans = ans * max(0, c[i] - i) % 1000000007;
    }
    cout << ans << endl;
    return 0;
}