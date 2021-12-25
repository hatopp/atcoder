#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    vector<bool> f(1000009);
    for (int i = 0; i < 1000009; ++i) {
