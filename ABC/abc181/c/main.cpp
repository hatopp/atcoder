#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    //縦h×横w
    int h = n;
    int w = 2;
    vector<vector<int>> v(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> v.at(i).at(j);
        }
    }
    bool f = false;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if ((v[k][1] - v[j][1]) * (v[j][0] - v[i][0]) ==
                    (v[j][1] - v[i][1]) * (v[k][0] - v[j][0])) {
                    f = true;
                    break;
                }
            }
        }
    }
    string byn;
    if (f == true) {
        byn = "Yes";
    } else {
        byn = "No";
    }
    cout << byn << endl;
    return 0;
}
