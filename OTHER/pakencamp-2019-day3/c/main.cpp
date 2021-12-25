#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    //縦h×横w
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v.at(i).at(j);
        }
    }
    ll ans = 0;
    ll wa = 0;

    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            //曲iとj
            for (int k = 0; k < n; k++) {
                // n人
                wa += max(v[k][i], v[k][j]);
            }
            ans = max(ans, wa);
            wa = 0;
        }
    }
    cout << ans << endl;
    return 0;
}
