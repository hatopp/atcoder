#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    vector<ll> a(3);
    for (int i = 0; i < 3; ++i) {
        cin >> a[i];
    }

    if (a[0] % 2 == 0 || a[1] % 2 == 0 || a[2] % 2 == 0) {
        cout << 0 << endl;
        return 0;
    }

    sort(a.begin(), a.end());
    cout << a[0] * a[1] << endl;
    return 0;
}