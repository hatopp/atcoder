#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, t;
    int cnt = 0;
    cin >> s >> t;
    for (int i = 0; i <= s; i++) {
        for (int j = 0; j <= s - i; j++) {
            for (int k = 0; k <= s - i - j; k++) {
                if (i * j * k <= t) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}