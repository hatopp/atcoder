#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    ll wa = 0;
    int cnt = 0;
    ;

    for (int i = 0; i < n - 1; i++) {
        if (v[i] == k) {
            cnt++;
        }
        for (int j = i + 1; j < n + 1; j++) {
            int w = accumulate(&v[i], &v[j], 0);
            cout << w << " ";
            if (w == k) {
                cnt++;
            }
        }
    }
    // if(v[n]
    cout << cnt << endl;
    return 0;
}
