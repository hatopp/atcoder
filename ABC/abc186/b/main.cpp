#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w, a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> h >> w;

    //縦h×横w
    vector<vector<int>> data(h, vector<int>(w));
    //二重ループ
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> data.at(i).at(j);
        }
    }

    a = data[0][0];

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            //cout << data[i][j] << endl;
            if (a > data[i][j])
            {
                a = data[i][j];
            }
        }
    }
    //cout << a << endl;

    ans = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            ans = ans + data[i][j] - a;
        }
    }

    cout << ans << endl;
    return 0;
}
