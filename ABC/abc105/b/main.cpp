#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool f = false;
    if (n % 7 == 0 || n % 4 == 0)
    {
        f = true;
    }

    else
    {
        for (int i = 1; i <= n / 7; i++)
        {
            n -= 7;
            if (n % 4 == 0 || n == 0)
            {
                f = true;
            }
        }
    }

    string byn;
    if (f == true)
    {
        byn = "Yes";
    }
    else
    {
        byn = "No";
    }
    cout << byn << endl;
    return 0;
}