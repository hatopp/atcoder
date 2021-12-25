#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, A[200009], B[200009], wa[200009];
    cin >> n;
    wa[1] = 0;
    for (int i = 1; i <= n - 1; i++) {
        cin >> A[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> B[i];
    }

    for (int i = 2; i <= n; i++) {
        wa[i] += wa[i - 1] + A[i - 1];
        // cout << wa[i] << endl;
    }

    int ans = 0;
    int now = B[1];
    for (int i = 2; i <= m; i++) {
        int next = B[i];
        int mae = min(next, now);
        int ushiro = max(next, now);

        ans += wa[ushiro] - wa[mae];
        now = next;
    }
    cout << ans << endl;
    return 0;
}
