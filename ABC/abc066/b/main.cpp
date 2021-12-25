#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 2; i < s.length() - 1; i++) {
        if (i % 2 == 0) {
            string mae = s.substr(0, i / 2);
            string ushiro = s.substr(i / 2, i / 2);
            if (mae == ushiro) {
                ans = max(ans, i);
            }
        }
    }
    cout << ans << endl;
    return 0;
}