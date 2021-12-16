#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, k;
    cin >> a >> b >> k;
    // cout << a << endl;

    long long int ta, ao;

    if (k == 0){
        ta = a;
        ao = b;
    }

    if (a + b <= k)
    {
        ta = 0;
        ao = 0;
    }
    else if (a >= k)
    {
        ta = a - k;
        ao = b;
    }
    else if (a < k)
    {
        ta = 0;
        ao = b - k + a;
    }

    cout << ta << " " << ao << endl;
    return 0;
}
