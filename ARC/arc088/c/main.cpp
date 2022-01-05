#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll x, y, ans;
    cin >> x >> y;
    if (y % x == 0) {
        ans = y / x - 1;
    }

    else {
        ans = y / x;
    }
    cout << ans << endl;
    return 0;
}