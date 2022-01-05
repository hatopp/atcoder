#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int zero = 0, iti = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            zero++;
        } else {
            iti++;
        }
    }
    cout << min(zero, iti) * 2 << endl;
    return 0;
}