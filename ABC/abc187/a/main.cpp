#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n;
    string s, k;
    cin >> s >> k;
    a = (s[0]-'0' + s[1]-'0' + s[2]-'0');
    b = (k[0]-'0' + k[1]-'0' + k[2]-'0');
    cout << max(a, b) << endl;
    return 0;
}