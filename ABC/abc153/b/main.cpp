#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a >> n;
    sans = "No";
    vector<int> data(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
        a = a - data[i];
    }

    if (a <= 0)
    {
        sans = "Yes";
    }

    cout << sans << endl;
    return 0;
}