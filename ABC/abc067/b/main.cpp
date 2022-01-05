#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    ll wa = 0;
    for (int i = 0; i < k; i++) {
        wa += v[i];
    }
    cout << wa << endl;
    return 0;
}