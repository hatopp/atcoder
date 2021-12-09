#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b >> x;

    bool f = false;

    if (a <= x && a + b >= x)
    {
        f = true;
    }

    string byn;
    if (f == true)
    {
        byn = "YES";
    }
    else
    {
        byn = "NO";
    }
    cout << byn << endl;
    return 0;
}