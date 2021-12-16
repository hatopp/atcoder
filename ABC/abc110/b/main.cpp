#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<int> b(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    string sans;
    if (x < y)
    {
        for (int i = x + 1; i <= y; i++)
        {
            if (a[n - 1] < b[0] && i > a[n - 1] && i <= b[0])
            {
                sans = "No War";
                break;
            }
            else
            {
                sans = "War";
            }
        }
    }

  if (x > y)
    {
        for (int i = y; i < x; i++)
        {
            if (b[n - 1] < a[0] && i >= b[n - 1] && i < a[0])
            {
                sans = "No War";
                break;
            }
            else
            {
                sans = "War";
            }
        }
    }

  

    cout << sans << endl;
    return 0;
}
