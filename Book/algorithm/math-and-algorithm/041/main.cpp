#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, A[500009];
    cin >> t >> n;

    int l[500009], r[500009];

    for (int i = 1; i <= n; i++) {
        cin >> l[i] >> r[i];
        A[l[i]]++;
        A[r[i]]--;
    }

    int wa = 0;
    for (int i = 0; i < t; i++) {
        wa += A[i];
        cout << wa << endl;
    }
    return 0;
}
