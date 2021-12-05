#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, z, n, count, ans;
    string a, b, c, d, sans;

    n = 4;
    sans = "Yes";

    vector<string> data(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
    }

    sort(data.begin(), data.end());

    if (data[1] != "2B" || data[1] != "3B" || data[2] != "H" || data[3] != "HR")
    {
        sans = "No";
    }

    cout << sans << endl;
    return 0;
}