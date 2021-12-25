#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    int b;
    cin >> a >> b;
    int l = a.length();
    int nl = b % l;
    if (nl == 0) {
        cout << a[l - 1] << endl;
        return 0;
    }
    cout << a[nl - 1] << endl;
    return 0;
}
