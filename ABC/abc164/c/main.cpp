#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int ans = 1;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] != v[i + 1]) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
