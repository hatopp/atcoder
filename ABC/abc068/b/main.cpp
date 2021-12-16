#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3fffffff;

int main()
{
    int n;
    cin >> n;
    int ans = 1;
    int itwo = 1;

    for (int i = 0; i < n / 2; i++)
    {
        itwo = pow(2, i);
        if (itwo <= n)
        {
            ans = itwo;
        }
        else //(itwo > n)
        {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
