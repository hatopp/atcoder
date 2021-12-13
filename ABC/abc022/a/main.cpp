#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, t, w;
    cin >> n >> s >> t >> w;

    int count = 0;

    if (s <= w && w <= t)
    {
        count++;
    }

    for (int i = 2; i <= n; i++)
    {
        int a;
        cin >> a;
        if (s <= w + a && w + a <= t)
        {
            count++;
        }
        w = w + a;
    }

    cout << count << endl;
    return 0;
}