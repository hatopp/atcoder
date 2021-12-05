#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    sans = "No";
    cin >> n;

    //縦h×横w
    vector<vector<int>> data(n, vector<int>(2));
    //二重ループ
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> data.at(i).at(j);
        }
    }

    vector<int> f(n);

    for (int i = 0; i < n; i++)
    {
        if (data[i][0] == data[i][1])
        {
            f[i] = 0;
        }
        else
        {
            f[i] = 1;
        }
    }

    for (int i = 0; i < n - 2; i++)
    {
        if (f[i] == 0 && f[i+1] == 0 && f[i+2] == 0)
        {
            sans = "Yes";
        }
    }
    cout << sans << endl;
    return 0;
}