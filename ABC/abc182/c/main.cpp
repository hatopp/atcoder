#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int wa = 0;
    int l = n.length();
    for (int i = 0; i < n.length(); i++) {
        wa += n[i];
    }

    if (wa % 3 == 0) {
        cout << 0 << endl;
        return 0;
    } else if (l == 1) {
        cout << -1 << endl;
        return 0;

    } else if (wa % 3 == 1) {
        for (int i = 0; i < l; i++) {
            if (n[i] % 3 == 1) {
                cout << 1 << endl;
                return 0;
            }
        }
    } else {
        for (int i = 0; i < l; i++) {
            if (n[i] % 3 == 2) {
                cout << 1 << endl;
                return 0;
            }
        }
    }

    for (int i = 0; i < l; i++) {
        if (n[i] % 3 == 0) {
            cout << l - 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}