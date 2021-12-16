#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<vector<int>>> ans(4, vector<vector<int>>(3, vector<int>(10)));
    int n, b, f, r, v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> b >> f >> r >> v;
        b--;
        f--;
        r--;
        ans[b][f][r] += v;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                cout << " " << ans[i][j][k];
            }
            cout << endl;
        }
        if (i != 3)
        {
            cout << "####################" << endl;
        }
    }
    return 0;
}
