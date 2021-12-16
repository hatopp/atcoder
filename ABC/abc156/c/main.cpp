#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3fffffff;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int ans = INF;
    int sum = 0;
    int ba;

    for (int i = v[0]; i <= v[n - 1]; i++)
    {
        ba = i;
        for (int j = 0; j < n; j++)
        {
            sum += pow(v[j] - ba, 2);
        }

        ans = min(ans, sum);
        sum = 0;
    }

    cout << ans << endl;
    return 0;
}
