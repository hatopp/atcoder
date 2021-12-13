#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int x = n[0] - '0';
    int xans = x * 100 + x * 10 + x;
    int xians = xans + 111;
    int ans;
    if (n[0] > n[1])
    {
        ans = xans;
    }
    else if (n[0] < n[1])
    {
        ans = xians;
    }

    //以下0==1
    else if (n[1] < n[2])
    {
        ans = xians;
    }
    else if (n[1] > n[2])
    {
        ans = xans;
    }
    else
    {
        ans = xans;
    }

    cout << ans << endl;
    return 0;
}
