#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    string ans = "No";

    if (s == t) {
        ans = "Yes";
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[i]) {
            if (0 < i) {
                swap(s[i - 1], s[i]);
                if (s == t) {
                    ans = "Yes";
                }
                swap(s[i - 1], s[i]);
            }
            if (i + 1 < s.length()) {
                swap(s[i], s[i + 1]);
                if (s == t) {
                    ans = "Yes";
                }
                swap(s[i], s[i + 1]);
            }
            break;
        }
    }
    cout << ans << endl;
}
