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

    long long int l=1;
    for (int i = 0; i < 100; i++)
    {
        if (n < l)
        {
            ans = i - 1;
            break;
        }
        l=2*l;
    }
    cout << ans << endl;
    return 0;
}