#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3fffffff;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    pair<ll, ll> p[n + 1];

    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        p[i].first = a;
        p[i].second = b;
    }

    double ans = INF;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            double nagasa = double(sqrt(pow((p[j].first - p[i].first), 2) +
                                        pow((p[j].second - p[i].second), 2)));
            ans = min(ans, nagasa);
        }
    }

    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}