#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, ans;
    cin >> s;

    int wa = (0, 8);

    for (int i = 0; i < 4; i++) {
        wa[i] += s[i] - '0';
        if (wa == 7) {
            ans = "+++";
            break;
        }

        cout << wa << endl;
        return 0;
    }
