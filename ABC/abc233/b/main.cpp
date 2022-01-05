#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    string s;
    cin >> l >> r >> s;
    for (int i = 0; i <= l - 2; i++) {
        cout << s[i];
    }
    for (int i = l - 1; i <= r - 1; i++) {
        cout << s[l + r - i - 2];
    }
    for (int i = r; i < s.length(); i++) {
        cout << s[i];
    }
    cout << endl;
    return 0;
}
