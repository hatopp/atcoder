#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n, s, a[69];
    cin >> n >> s;
    bool dp[69][10009];

    for (int i = 1; i < n; i++) {
        cin >> a[i];
    }

    dp[0][0] = true;
    for (int i = 1; i <= s; i++) {
        dp[0][i] = false;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= s; j++) {
            if (j < a[i]) dp[i][j] = dp[i - 1][j];
            if (j >= a[i]) {
                if (dp[i - 1][j] == true || dp[i - 1][j - a[i]] == true) {
                    dp[i][j] = true;
                } else
                    dp[i][j] = false;
            }
        }
    }

    if (dp[n][s] == true) {
        cout << "Yes" << endl;
    } else
        cout << "No" << endl;
    return 0;
}