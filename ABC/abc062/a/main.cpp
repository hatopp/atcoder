#include <bits/stdc++.h>
using namespace std;
bool f = true;
int main()
{
    vector<int> g(2);
    int x;
    for (int i = 0; i < 2; i++)
    {
        cin >> x;
        if (x == 2)
        {
            g[i] = 2;
        }
        else if (x == 4 || x == 6 || x == 9 || x == 11)
        {
            g[i] = 1;
        }
        else
        {
            g[i] = 0;
        }
    }
    if (g[0] == g[1])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
