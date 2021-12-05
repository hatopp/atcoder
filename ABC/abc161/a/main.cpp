#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> x >> y >> z;
    swap(x, y);
    /*x = a;
    x = y
    y = a;*/
    swap(x, z);
    /*x = b;
    x = z;
    z = b;*/

    cout << x << ' ' << y << ' ' << z << endl;
    return 0;
}
