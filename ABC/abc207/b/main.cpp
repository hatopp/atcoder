#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll bl = a;
    ll r = 0;
    for (int i = 1; i <= a; i++) {
        bl += b;
        r += c;
        if (bl <= d * r) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
