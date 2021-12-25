#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3fffffff;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    ll ans = INF;

    for (int ab = 0; ab < 201010; ab++) {
        ll sm = c * ab;

        ll nx = x - ab / 2;
        ll ny = y - ab / 2;

        if (0 < nx) {
            sm += nx * a;
        }
        if (0 < ny) {
            sm += ny * b;
        }
        ans = min(ans, sm);
    }
    cout << ans << endl;
}
