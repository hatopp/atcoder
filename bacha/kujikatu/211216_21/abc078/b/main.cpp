#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    x = x - z;
    cout << x / (y + z) << endl;
    return 0;
}