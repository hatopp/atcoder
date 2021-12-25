#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b, c;
    cin >> n >> m >> a >> b;

    for (int i = 1; i <= m; i++) {
        if (n <= a) {
            n += b;
        }
        cin >> c;
        n -= c;

        if (i != m && n < 0) {
            cout << i << endl;
            return 0;
        }
        if (i == m && n < 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << "complete" << endl;
    return 0;
}
