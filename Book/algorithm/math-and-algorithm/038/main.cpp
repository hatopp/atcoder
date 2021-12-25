#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, q, A[100001];
    cin >> n >> q;
    A[0] = 0;

    for (int i = 1; i <= n; i++) {
        ll a;
        cin >> a;
        A[i] = A[i - 1] + a;
    }

    for (int i = 1; i <= q; i++) {
        int l, r;
        cin >> l >> r;
        cout << A[r] - A[l - 1] << endl;
    }
    return 0;
}
