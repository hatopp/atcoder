#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double a;
        string b;
        cin >> a >> b;
        if (b == "BTC")
        {
            sum += 380000 * a;
        }
        else
        {
            sum += a;
        }
    }

    cout << sum << endl;
    return 0;
}
