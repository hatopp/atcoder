#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> d;
    sans = "Christmas";
    for (int i = 24; i >= d; i--)
    {
        sans += " Eve";
    }
    cout << sans << endl;
    return 0;
}
