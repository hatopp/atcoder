#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;

    vector<pair<int, string>> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].second >> p[i].first;
    }

    sort(p.begin(), p.end());
    cout << p[n - 2].second << endl;
    return 0;
}
