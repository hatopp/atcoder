#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    bool f = false;

    if (b[0] == a[a.length() - 1] &&
        b[b.length() - 1] == c[0])
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
