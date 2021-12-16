#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int nijo = 1;
    int ct = 0;
    while (abs(nijo) < abs(n))
    {
        nijo = -2 * nijo;
        ct++;
    }
    cout << ct << endl;
    // ctは桁数
    string sans;

    if (n < 0)
    {
        for (int i = ct - 1; i > 0; i--)
        {
            //-は全部"1"
            if (i % 2 == 1)
            {
                sans[i] = '1';
                n -= pow(-2, i);
            }
        }

        for (int i = ct - 1; i > 0; i--)
        {
            if (n >= abs(pow(-2, i)))
            {
                n -= abs(pow(-2, i));
                sans[i] = '1';
            }
        }
        //        cout << n << endl;
        if (n == 1)
        {
            sans[ct] = '1';
        }

        for (int i = 1; i <= ct; i++)
        {
            if (sans[i] == '1')
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
    }
    else if (n > 0)
    {
        for (int i = ct - 1; i > 0; i--)
        {
            //+は全部"1"
            if (i % 2 == 1)
            {
                sans[i] = '1';
                n -= pow(-2, i);
            }
        }
        for (int i = ct - 1; i > 0; i--)
        {
            if (n >= abs(pow(-2, i)))
            {
                n -= abs(pow(-2, i));
                sans[i] = '1';
            }
        }
        cout << n << endl;
        for (int i = 1; i <= ct; i++)
        {
            if (sans[i] == '1')
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
    }

    // cout << n << endl;
    return 0;
}
