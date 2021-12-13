#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, a, b;
    cin >> x >> a >> b;

    string sans;

    if (b <= a)
    {
        sans = "delicious";
    }

    else if (b > a && b <= a + x)
    {
        sans = "safe";
    }
    else if (b > a + x)
    {
        sans = "dangerous";
    }

    cout << sans << endl;
    return 0;
}
