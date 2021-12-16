#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    vector<bool> vb(n,false);
    vb[x-1]=true; //x=2でx-1に住んでる友達2 は既知
    
    x = v[x-1]; // x=1　x-1に住んでる友達3が次に知る
    for (int i = 0; i < n; i++)
    { 
        if (vb[x-1]==false)
        {
            vb[x-1]=true;
            x=v[x-1];
        }
        else
        {
            continue;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (vb[i]==true)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}