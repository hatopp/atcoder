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
    int ct = 0;

    while (v
    int a = *min_element(v.begin(), v.end());
    ct += a;
    for (int i = 0; i < n; i++)
    {
        v[i] -= a;
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {

        }
    }
}

int amin()
{
    int ct=0;
    int a = *min_element(v.begin(), v.end());
    ct += a;
    for (int i = 0; i < v.size(); i++)
    {
        v[i] -= a;
    }
    return ct;
}