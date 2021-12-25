#include <bits/stdc++.h>
using namespace std;

int main()
{

    int h, w;
    cin >> h >> w;

    //縦h×横w
    //縦h×横w

    vector<vector<char>> v(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> v.at(i).at(j);
        }
    }
    int ans = 0;
    char now = v[0][0];
    int nh = 0;
    int nw = 0;
    cout << now << nh << nw << endl;

    while (nh < h && nw < w)
    {
        if (v[nh + 1][nw] == '.')
        {
            nh++;
            ans++;
            now = v[nh][nw];
        }
        else if (v[nh][nw + 1] == '.')
        {
            nw++;
            ans++;
            now = v[nh][nw];
        }
    }

    cout << ans << endl;
    return 0;
}
