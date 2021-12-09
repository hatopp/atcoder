#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;P

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    string sans = "APPROVED";
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            if (v[i] % 3 != 0 && v[i] % 5 != 0)
            {
                sans = "DENIED";
                break;
            }
        }
    }

    cout << sans << endl;
    return 0;
}