#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, x, y;
    cin >> h >> w >> x >> y;

    //縦h×横w
    vector<vector<string>> v(h, vector<string>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> v.at(i).at(j);
        }
    }

    int cnt = 1;
    for (int i = x - 1; i > 0; i--) {
        if (v[y - 1][i] == ".") {
            cnt++;
        } else {
            break;
        }
    }
    for (int i = x + 1; i < w; i++) {
        if (v[y - 1][i] == ".") {
            cnt++;
        } else {
            break;
        }
    }
    for (int i = y - 1; i > 0; i--) {
        if (v[i][x - 1] == ".") {
            cnt++;
        } else {
            break;
        }
    }
    for (int i = y + 1; i < h; i++) {
        if (v[i][x - 1] == ".") {
            cnt++;
        } else {
            break;
        }
    }

    cout << cnt << endl;
    return 0;
}
