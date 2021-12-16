#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        swap((*max_element(v.begin(), v.end())), (*max_element(v.begin(), v.end()) * 2));
    }

    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += v[i];
    }

    cout << ans << endl;
    return 0;
}