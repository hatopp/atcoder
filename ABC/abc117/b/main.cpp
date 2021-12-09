#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());

    int wa = 0;
    for (int i = 1; i < n; i++)
    {
        wa += v[i];
    }

    bool f = true;
    if (wa <= v[0])
    {
        f = false;
    }

    string byn;
    if (f == true)
    {
        byn = "Yes";
    }
    else
    {
        byn = "No";
    }
    cout << byn << endl;
    return 0;
}
