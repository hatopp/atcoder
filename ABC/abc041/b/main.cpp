#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    ll d = (a * b) % (int)(1e9 + 7);
    cout << (d * c) % (int)(1e9 + 7) << endl;
}