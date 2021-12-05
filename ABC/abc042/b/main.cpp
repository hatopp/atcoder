#include <bits/stdc++.h>
using namespace std;

int main()
{
    string l;
    int n;
    cin >> n >> l;
    vector<string> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    string ans = "";

    for (int j = 0; j < n; j++)
    {
        ans = ans + a[j];
    }

    cout << ans << endl;
    return 0;
}
