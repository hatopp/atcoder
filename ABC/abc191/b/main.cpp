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
    }

    for (int i = 0; i < n; ++i)
    {
        if (data[i] != x)
        {
            cout << data[i];
            if (i != n-1)
            {
                cout << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
