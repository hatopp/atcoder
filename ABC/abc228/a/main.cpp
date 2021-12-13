#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, t, x;
    cin >> s >> t >> x;

    bool f = false;

    if (s < t)
    {
        if (s <= x && x < t)
        {
            f = true;
        }
    }
    else
    {
        if (x < t || s <= x)
        {
            f = true;
        }
    }
    string byn;
    if (f == true)
    {
        byn = "Yes";
    }
    else
    {
        byn = "No";
    }
    cout << byn << endl;
    return 0;
}