#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[n];
        ans += a[n];
    }
    cout << ans % 100 << endl;
    return 0;
}