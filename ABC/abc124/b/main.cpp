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

    int ct = 1;
    int max = v[0];
    for (int i = 1; i < n; i++)
    {
        if (max <= v[i])
        {
            ct++;
            max = v[i];
        }
    }

    cout << ct << endl;
    return 0;
}