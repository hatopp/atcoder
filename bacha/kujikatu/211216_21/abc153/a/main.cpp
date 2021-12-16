#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, a;
    cin >> h >> a;
    // a / b >> (a + (b - 1)) / b
    cout << (h + a - 1) / a << endl;
    return 0;
}