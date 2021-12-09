#include <bits/stdc++.h>
using namespace std;

int main()
{
    string r, g, b;
    cin >> r >> g >> b;
    string s = r + g + b;
    bool f = false;

    int ans = stoi(s);

    if (ans % 4 == 0)
    {
        f = true;
    }

    string sans;
    if (f == true)
    {
        sans = "YES";
    }
    else
    {
        sans = "NO";
    }
    cout << sans << endl;
    return 0;
}