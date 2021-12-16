#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int sum = 0;
    vector<int> v(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> v[i];
        sum += v[i];
    }

    int ans;
    if (sum > n)
    {
        ans = -1;
    }
    else if (sum == n)
    {
        ans = 0;
    }
    else
    {
        ans =  n-sum;
    }

    cout << ans << endl;
    return 0;
}
