#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;
    ll cnt = 0;
    ll ans = 0;

    ll ws = (ll)s.rfind("W");

    for (ll j = 0; j < ws; j++) {
        if (s[j] == 'B') {
            cnt++;
        }
        if (s[j] == 'W') {
            ans += cnt;
        }
    }
    cout << ans << endl;
    return 0;
}
