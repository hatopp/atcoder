#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int ia = stoi(a);
    int ib = stoi(b);

    string ab, ba;

    for (int i = 0; i < ib; i++)
    {
        ab += a;
    }

    for (int i = 0; i < ia; i++)
    {
        ba += b;
    }

    string sans;
    if (ab < ba)
    {
        sans = ab;
    }
    else
    {
        sans = ba;
    }

    cout << sans << endl;
    return 0;
}
