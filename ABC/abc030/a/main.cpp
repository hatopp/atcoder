#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c, d;
    cin >> a >> b >> c >> d;

    string sans;
    if ((b / a) > (d / c))
    {
        sans = "TAKAHASHI";
    }
    else if ((b / a) < (d / c))
    {
        sans = "AOKI";
    }
    else
    {
        sans = "DRAW";
    }

    cout << sans << endl;
    return 0;
}
