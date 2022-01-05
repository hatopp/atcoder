#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end());
    string mae, ato;
    /*
        for (int i = 0; i < n - 2; i++) {
            cout << v[i].first << endl;
            if (v[i].first == v[i + 1].first) {
                mae = "Yes";
            }
        }
        */

    for (int i = 0; i < n - 2; i++) {
        cout << v[i].second << " " << v[i + 1].second << endl;
        if (v[i].second == v[i + 1].second) {
            ato = "Yes";
        }
    }

    if (mae == "Yes" || ato == "Yes") {
        cout << "Yes" << endl;
        return 0;
    }

    for (int i = 0; i < n - 1; i++) {
        cout << v[i].first << endl;
        if (v[i].first != i + 1) {
            cout << "No" << endl;
            return 0;
        }
    }
}
