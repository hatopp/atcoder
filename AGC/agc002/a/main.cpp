#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll a, b;
    cin >> a >> b;

    if (a <= 0 && b >= 0) {
        cout << "Zero" << endl;
        return 0;
    }

    else if (a > 0 && b > 0) {
        cout << "Positive" << endl;
        return 0;
    }

    else if (abs(b - a + 1) % 2 == 0) {
        cout << "Positive" << endl;
        return 0;
    } else {
        cout << "Negative" << endl;
        return 0;
    }
}