#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, f, r;
    string sans;

    while (true)
    {
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1)
        {
            break;
        }

        if (m == -1 || f == -1)
        {
            sans = "F";
        }
        else if (m + f >= 80)
        {
            sans = "A";
        }
        else if (m + f >= 65)
        {
            sans = "B";
        }
        else if (m + f >= 50)
        {
            sans = "C";
        }
        else if (m + f >= 30 && r < 50)
        {
            sans = "D";
        }
        else if (m + f >= 30 && r >= 50)
        {
            sans = "C";
        }
        else
        {
            sans = "F";
        }

        cout << sans << endl;
    }
    return 0;
}