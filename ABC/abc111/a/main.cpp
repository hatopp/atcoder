#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, count, ans;
    string n, s, sans;
    cin >> n;
    for (int i = 0; i < 3; i++)
    {
        if (n[i] == '1')
        {
            n[i] = '9';
        }
        else if (n[i] == '9')
        {
            n[i] = '1';
        }
    }
    cout << n << endl;
    return 0;
}