#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool f = true;
    if (b - a != c - b)
    {
        f = false;
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