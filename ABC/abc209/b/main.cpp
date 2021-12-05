#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n >> x;

    vector<int> data(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
        if (i % 2 == 1)
        {
            data[i] = data[i] - 1;
        }
    }

    sans = "No";

    if (accumulate(data.begin(), data.end(), 0) <= x)
    {
        sans = "Yes";
    }

    cout << sans << endl;
    return 0;
}