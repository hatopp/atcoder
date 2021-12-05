#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, ans;
    string s, sans;
    cin >> n;
    ans = 0;
    sans = "No";
    vector<int> data_a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> data_a[i];
    }

    vector<int> data_b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> data_b[i];
    }

    for (int i = 0; i < n; ++i)
    {
        ans += data_a[i] * data_b[i];
    }

    if (ans == 0)
    {
        sans = "Yes";
    }
    cout << sans << endl;
    return 0;
}