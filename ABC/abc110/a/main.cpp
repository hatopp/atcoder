#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());
  
    int ans = v[0]*10+v[1]+v[2];
    cout << ans << endl;
    return 0;
}