#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, b, c, d, x, y, z, n, count, ans;
    string s, sans;

    cin >> n >> p;
    count = 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] < p)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
