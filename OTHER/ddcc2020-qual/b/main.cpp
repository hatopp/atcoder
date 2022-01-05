#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, wa;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        wa += v[i];
    }

    ll minx = wa, sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += v[i];