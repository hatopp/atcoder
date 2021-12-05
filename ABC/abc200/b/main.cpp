#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, count, ans;
    unsigned long int  n;
    string s, sans;
    cin >> n >> a;

    for (int i = 0; i < a; i++)
    {
        if (n % 200==0)
        {
            n = n / 200;
        }
        else
        {
            n = n * 1000 + 200;
        }
    }
    cout << n << endl;
    return 0;
}
