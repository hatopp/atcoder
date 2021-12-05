#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(),greater<int>());

    int ali = 0;
    int bob = 0;

    for (int i = 0; i < n; i=i+2)
    {
        ali += a[i];
        bob += a[i + 1];
    }

    cout << ali - bob << endl;
    return 0;
}
