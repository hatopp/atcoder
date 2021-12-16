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

    int mae = 0;
    int ato;
    for (int i = 0; i < n; i++)
    {
        if (v[i + 1] - v[i] != 1)
        {
            if (mae == 0)
            {
                v[i] = mae;
            }
            else
            {
                v[i] = ato;
            }cd
        }
    }


    
