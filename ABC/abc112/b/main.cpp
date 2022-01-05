#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3fffffff;

int main() {
    int n, t;
    cin >> n >> t;
    //縦h×横w
    int h = n;
    int w = 2;
    vector<vector<int>> v(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> v.at(i).at(j);
        }
    }
    int ans = INF;

    for (int i = 0; i < n; i++) {
        if (v[i][1] <= t) {
            ans = min(ans, v[i][0]);
        }
    }
    if (ans == INF) {
        cout << "TLE" << endl;
        return 0;
    } else {
        cout << ans << endl;
        return 0;
    }
}
