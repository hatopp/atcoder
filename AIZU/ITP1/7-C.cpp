#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    //縦h×横w
    cin >> r >> c;
    vector<vector<int>> v(r + 1, vector<int>(c + 1, 0));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            v[i].back() += v[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c + 1; j++)
        {
            v.back()[j] += v[i][j];
        }
    }

    for (int i = 0; i < r + 1; i++)
    {
        for (int j = 0; j < c + 1; j++)
        {
            if (j != 0)
            {
                cout << " ";
            }
            cout << v[i][j];
        }
        cout << endl;
    }
    return 0;
}
