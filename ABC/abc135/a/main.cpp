#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long int a, b, ans;
    long long int x, y, z;
    string s, sans;
    cin >> a >> b;
    sans = "IMPOSSIBLE";

    ans = (a + b) / 2;
    if (abs(a - ans) == abs(b - ans))
    {
        cout << ans << endl;
        return 0;
    }

    else
    {
        /*
            x = min(a, b);
            y = max(a, b);
            z = y - x;



            for (long long int i = x; i < z; i++)
            {
                if (x + y == 2 * i)
                {
                    cout << i << endl;
                    return 0;
                }
            }
        */
        cout << sans << endl;

        return 0;
    }
}

