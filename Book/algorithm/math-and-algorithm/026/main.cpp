#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;

    double ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += (double)n / i;
    }

    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}
