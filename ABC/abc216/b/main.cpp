#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    int ans = 0;

    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 1; i < n; i = i * 2)
    {
        if (n < i)
        {
            ans = i - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
