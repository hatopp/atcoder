#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n;
    n = n % 10;
    sans = "hon";
    if (n == 0 || n == 1 || n == 6 || n == 8)
    {
        sans = "pon";
    }
    if (n == 3)
    {
        sans = "bon";
    }
    cout << sans << endl;
    return 0;
}