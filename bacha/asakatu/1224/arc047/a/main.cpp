#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    string s;
    cin >> n >> l >> s;
    int tab = 1;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '+') {
            tab++;
        }
        if (s[i] == '-') {
            tab--;
        }

        if (tab > l) {
            cnt++;
            tab = 1;
        }
    }

    cout << cnt << endl;
    return 0;
}
