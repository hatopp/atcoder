//できそうなんだけどあたまおかしくなりました
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return (b);
    }
    else
    {
        return (gcd(b, a % b));
    }
}

int main()
{
    int n;
    cin >> n;

    //縦×横
    vector<vector<int>> a(n, vector<int>(2));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cin >> a.at(i).at(j);
        }
    }

    //各行の和をすべてvectorに突っ込む
    vector<int> wa(n);
    for (int i = 0; i < n; i++)
    {
        wa[i] = a[i][0] + a[i][1];
    }

//できそうなんだけどあたまおかしくなりました
    //ひとつ前の答え wa[i-1] と入力した数値の和 wa[i] のGCM
    //最初

    for (int i = 1; i < n + i++)
    {
        int G = gcd(wa[i - 1] , wa[i]) ;
        if (G > 

        
    }
        else

            for (int i = 1; i < n; i++)
            {
                if (seki[i - 1] > seki[i])
                {
                    seki[i] = 2 * seki[i];
                }
            }
        for (int i = 0; i < n; i++)
        {
            cout << seki[i] << endl;
        }
    }
