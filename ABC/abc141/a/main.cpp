#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> s;

    if (s == "Sunny")
    {
        sans = "Cloudy";
    }
    else if (s == "Cloudy")
    {
        sans = "Rainy";
    }
    else if (s == "Rainy")
    {
        sans = "Sunny";
    }
    cout << sans << endl;
    return 0;
}