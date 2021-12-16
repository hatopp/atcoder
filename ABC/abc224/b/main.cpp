#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;

    //縦h×横w
    vector<vector<int>> v(h, vector<int>(w));
    for (int i = 0; i <= h; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            cin >> v.at(i).at(j);
        }
    }

    for (int ih = 0; ih < h - 1; ih++) 
    {
        for (int jh = ih + 1; jh < h; jh++) 
        {
            for (int iw = 0; iw < w - 1; iw++) 
            {
                for (int jw = iw + 1; jw < w; jw++) 
                {
                    if (v[ih][iw] + v[jh][jw] > v[ih][jw] + v[jh][iw])
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
