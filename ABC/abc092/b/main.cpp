#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d, x;
    cin >> n >> d >> x;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int ans = x;

    for (int i = 0; i < n; i++) {
        if (v[i] > d) {
            ans++;
        } else {
            // a / b >> (a + (b - 1)) / b
            int a = ((d + v[i] - 1) / v[i]);
            for (int j = 0; j < a; j++) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
