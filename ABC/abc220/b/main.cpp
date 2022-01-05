#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(string s, ll k) {
    ll ans = 0;
    for (char x : s) {
        ans *= k;
        ans += x - '0';
    }
    return ans;
}

signed main() {
    ll k;
    string a, b;
    cin >> k >> a >> b;
    ll A = f(a, k);
    ll B = f(b, k);
    cout << A * B << endl;
    return 0;
}
