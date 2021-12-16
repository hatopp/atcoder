#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            cout << ' ' << i;
        }
        else
        {
            string y = to_string(i);
            for (int i = 0; i < y.size(); i++)
            {
                if (y[i] == '3')
                {
                    cout << ' ' << y;
                    break;
                }
            }
        }
    }
    cout << endl;
    return 0;
}
