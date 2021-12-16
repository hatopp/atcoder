#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int len = log10(n) + 1;
    int ans = 0;

    if (len <= 2)
    {
        ans += min(n, 9);
    }

    else
    {
        for (int i = 1; i < len; i++)
        {
            if (i % 2 == 1)
            {
                ans += 9 * pow(10, i - 1);
                //cout << i << "けたの時" << 9 * pow(10, i - 1) << endl;
            }
        }
    }

    if (len > 2 && len % 2 == 1)
    {
        //cout << len << "けたの時" << n - pow(10, len - 1) + 1 << endl;
        ans += n - pow(10, len - 1) + 1;
    }

    cout << ans << endl;
    return 0;
}
