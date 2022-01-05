#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        p[i] = make_pair(a, b);
    }
    cout << p[1].first << endl;
}