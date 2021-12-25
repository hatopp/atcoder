#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int awa = 0;
    int bwa = 0;

    for (int i = 0; i < a.length(); i++) {
        awa += a[i] - '0';
    }

    for (int i = 0; i < b.length(); i++) {
        bwa += b[i] - '0';
    }

    cout << max(awa, bwa) << endl;
    return 0;
}
