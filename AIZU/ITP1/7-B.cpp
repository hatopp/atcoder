#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    int ct = 0;

    while (true)
    {
        cin >> n >> x;
        if (n == 0 && x == 0)
        {
            break;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                for (int k = j + 1; k <= n; k++)
                {
                    if (i + j + k == x)
                    {
                        ct++;
                    }
                }
            }
        }
        cout << ct << endl;
        ct = 0;
    }

    return 0;
}
