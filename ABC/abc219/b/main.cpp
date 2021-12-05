#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string sa, sb, sc, t, u, sans;

    cin >> sa >> sb >> sc;
    cin >> t;

    sans = "";
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == '1')
        {
            sans += sa;
        }
        if (t[i] == '2')
        {
            sans += sb;
        }
        if (t[i] == '3')
        {
            sans += sc;
        }
    }

    cout << sans << endl;
    return 0;
}