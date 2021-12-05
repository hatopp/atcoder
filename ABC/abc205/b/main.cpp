#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n;

    sans = "Yes";
    vector<int> data(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
    }

    sort(data.begin(), data.end());

    for (int i = 0; i < n - 1; ++i)
    {
        if (data[0] != 1)
        {
            sans = "No";
            break;
        }

        else if (data[i] + 1 != data[i + 1])
        {
            sans = "No";
            break;
        }
    }

    cout << sans << endl;
    return 0;
}