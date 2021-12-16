#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //縦h×横w
    vector<vector<double>> v(n, vector<double>(2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> v.at(i).at(j);
        }
    }

    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double k = (v[j][1] - v[i][1]) / (v[j][0] - v[i][0]);
            
            if (k >= -1 && k <= 1)
            {
                ct++;
            }
        }
    }

    cout << ct << endl;
    return 0;
}
