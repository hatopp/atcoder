#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, L[100009], B[100009], R[100009], X[100009];

    cin >> n >> q;
    for (int i = 1; i <= q; i++) {
        cin >> L[i] >> R[i] >> X[i];
        B[L[i]] += X[i];
        B[R[i] + 1] -= X[i];
    }

    for (int i = 2; i <= n; i++) {
        // cout << L[i] << endl;
        if (B[i] < 0) {
            cout << ">";
        }
        if (B[i] == 0) {
            cout << "=";
        }
        if (B[i] > 0) {
            cout << "<";
        }
    }
    cout << endl;
    return 0;
}