#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // a / b >> (a + (b - 1)) / b
    cout << (n + 2 - 1) / 2 << endl;
    return 0;
}