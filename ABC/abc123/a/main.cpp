#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    n = 5;
    vector<int> data(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
    }
    sort(data.begin(), data.end());

    cin >> x;

    sans = "Yay!";
    if (x < data[4] - data[0])
    {
        sans = ":(";
    }
    cout << sans << endl;
    return 0;
}
