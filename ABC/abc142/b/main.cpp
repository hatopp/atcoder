#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n >> a;
    count = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (x >= a)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
