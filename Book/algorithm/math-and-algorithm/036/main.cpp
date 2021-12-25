#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, h, m, p;

    cin >> a >> b >> h >> m;

    double kaku1 = abs(p * m / 30 - (p * h + m) * 0.5 / 360);
    double kaku = min(kaku1, 2 * p - kaku1);
    cout << kaku << endl;
    cout << cos(kaku) << endl;

    double cc = a * a + b * b - 2 * a * b * cos(kaku);
    cout << cc << endl;

    p = M_PI;
    double ans = sqrt(a * a + b * b - 2 * a * b * cos(kaku));
    cout << ans << endl;
    return 0;
}
