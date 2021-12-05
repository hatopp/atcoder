#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n;
    string sans;
    for (int i = 0; i < 26; i++)
    {
        cin >> a;
        sans += (char)('a' + a - 1);
    }
    cout << sans << endl;
    return 0;
}