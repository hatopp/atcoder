#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, x;
    cin >> n >> x;

    ll seki = 1;

    vector<vector<int>> v(n);

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.at(i).push_back(a);
        for (int j = 1; j <= v[i][0]; j++) {
            int b;
            cin >> b;
            v.at(i).push_back(b);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < v[i][0]; j++) {
            for (int k = 0; k < n; k++) {
                seki *= v[k][j];
                v[n][l1];