#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int wa = 1;
    int cnt = 0;

    while (wa < b)
    {
        wa += a - 1;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}