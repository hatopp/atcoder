#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    int x = max({a, b, c});

    int sum = a + b + c + x * (pow(2, k) - 1);

    cout << sum << endl;
    return 0;
}
