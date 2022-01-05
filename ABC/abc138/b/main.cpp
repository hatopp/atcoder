#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    double wa = 0;
    for (int i = 0; i < n; i++) {
        wa += 1 / v[i];
    }
    cout << 1 / wa << endl;
    return 0;
}
