#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    ll L = pow((d - a), 2) + pow((e - b), 2);

    if (L > pow((c + f), 2)) {
        cout << 5 << endl;
        return 0;
    }
    if (L == pow((c - f), 2)) {
        cout << 2 << endl;
        return 0;
    }
    if (L == pow((c + f), 2)) {
        cout << 4 << endl;
        return 0;
    }
    if (L < pow((c - f), 2)) {
        cout << 1 << endl;
        return 0;
    }
    if (L < pow((c + f), 2)) {
        cout << 3 << endl;
        return 0;
    }
}
