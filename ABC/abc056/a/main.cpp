#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    string sans;

    if (a == b)
    {
        sans = "H";
    }
    else
    {
        sans = "D";
    }

    cout << sans << endl;
    return 0;
}
