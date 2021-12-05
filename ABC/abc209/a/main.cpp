#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if (a <= b)
    {
        ans = b - a + 1;
    }
    else if (a == b)
    {
        ans = 1;
    }
    cout << ans << endl;
    return 0;
}