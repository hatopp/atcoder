#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int sum = 0;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    cout << v[0] << " " << v[n - 1] << " " << sum << endl;
    return 0;
}
