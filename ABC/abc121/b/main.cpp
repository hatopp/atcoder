#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c;
    cin >> n >> m >> c;

    vector<int> b(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }
    vector<int> a(m);
    int sum = 0;
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[j];
            sum += a[j] * b[j];
        }
        if (sum + c > 0)
        {
            ct++;
        }
        sum = 0;
    }

    cout << ct << endl;
    return 0;
}