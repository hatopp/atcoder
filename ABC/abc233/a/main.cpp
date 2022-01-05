#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    // a / b >> (a + (b - 1)) / b
    int ny = y - x;
    if (x > y) {
        cout << 0 << endl;
        return 0;
    } else if ((y - x) % 10 == 0) {
        cout << (y - x) / 10 << endl;
        return 0;
    } else {
        cout << (y - x) / 10 + 1 << endl;
        return 0;
    }
}