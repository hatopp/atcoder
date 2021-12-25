#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<int> x(n + 1);
    int kazu = 0;
    int ans = 0;

    for (ll i = 1; i <= n; i++) {
        if (n % 2 == 0) {
            break;

        } else {
            for (int j = 2; j <= n; j++) {
                while (n % j == 0) {
                    x.at(j)++;
                    n /= j;
                }
            }

            for (int j = 2; j <= n; j++) {
                kazu *= x.at(j) + 1;
            }

            if (kazu == 3) {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}