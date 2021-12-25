#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll x, y;
    cin >> x >> y;

    if (x % y == 0) {
        cout << -1 << endl;
        return 0;
    } else {
        cout << x << endl;
        return 0;
    }
}
