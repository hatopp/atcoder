#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    vector<long long int> r;
    vector<long long int> g;
    vector<long long int> b;

    long long int a;
    string s;
    for (long long int i = 0; i < 2 * n; i++)
    {
        cin >> a >> s;
        if (s == "R")
        {
            r.push_back(a);
        }
        else if (s == "G")
        {
            g.push_back(a);
        }
        else
        {
            b.push_back(a);
        }
    }
    long long int ans;

    if (r.size() % 2 == 0 && g.size() % 2 == 0 && b.size() % 2 == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    const int INF = 0x3fffffff;
    long long int im = INF;

    if (r.size() % 2 == 0)
    {
        for (long long int i = 0; i < g.size(); i++)
        {
            for (long long int j = 0; j < b.size(); j++)
            {
                if (g[i] == b[j])
                {
                    cout << 0 << endl;
                    return 0;
                }
                else
                {
                    long long int sa = abs(g[i] - b[j]);
                    im = min(im, sa);
                }
            }
        }
        cout << im << endl;
        return 0;
    }

    if (g.size() % 2 == 0)
    {
        for (long long int i = 0; i < r.size(); i++)
        {
            for (long long int j = 0; j < b.size(); j++)
            {
                if (r[i] == b[j])
                {
                    cout << 0 << endl;
                    return 0;
                }
                else
                {
                    long long int sa = abs(r[i] - b[j]);
                    im = min(im, sa);
                }
            }
        }
        cout << im << endl;
        return 0;
    }

    if (b.size() % 2 == 0)
    {
        for (long long int i = 0; i < r.size(); i++)
        {
            for (long long int j = 0; j < g.size(); j++)
            {
                if (r[i] == g[j])
                {
                    cout << 0 << endl;
                    return 0;
                }
                else
                {
                    long long int sa = abs(r[i] - g[j]);
                    im = min(im, sa);
                }
            }
        }
        cout << im << endl;
        return 0;
    }
}
