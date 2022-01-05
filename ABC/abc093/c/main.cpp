#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n = 3;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    vector<int> b;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            b.push_back(0);
        } else {
            b.push_back(1);
        }
    }

    if
