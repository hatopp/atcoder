#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;

    if (x[0] == x[1] && x[1] == x[2] && x[2] == x[3])
    {
        cout << "Weak" << endl;
        return 0;
    }

    int ct = 0;
    for (int i = 0; i < 3; i++)
    {
        // cout << x[i] - '0' << endl;
        if ((x[i + 1] - '0') % 10 == ((x[i] - '0')+1) % 10)
        {
            ct++;
        }
        else
        {

            break;
        }
    }

    if (ct == 3)
    {
        cout << "Weak" << endl;
        return 0;
    }

    cout << "Strong" << endl;
    return 0;
}