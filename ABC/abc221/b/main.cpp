#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    bool f = false;

    if (s == t)
    {
        cout << "Yes" << endl;
        return 0;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (t[i] != s[i])
        {
            if (s[i + 1] == t[i])
            {
                f = true;
                
            }

            else
            {
                cout << "No" << endl;
                return 0;
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
