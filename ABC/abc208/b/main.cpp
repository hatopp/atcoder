#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    cin >> p;
    vector<int> v(10);
    v[0] = 1;
    for (int i = 1; i < 10; ++i)
    {
        v[i] = v[i - 1] * (i + 1);
    }

    reverse(v.begin(), v.end());

    int ans = 0;
    int a;
    for (int i = 0; i < 10; i++)
    {
        a = p / v[i];
        ans += a;
        p -= a * v[i];
        if (p == 0)
        {
            cout << ans << endl;
            return 0;
        }
    }
}
