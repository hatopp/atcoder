#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int sum = 0;
    int ct = 1;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        sum += a;

        if (sum <= x)
        {
            ct++;
        }
        else
        {
            break;
        }
    }
    cout << ct << endl;
    return 0;
}
