#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    bool f = false;

    vector<int> v(s.length());

    for (int i = 0; i < s.length(); i++)
    {
        int b = t[i] - s[i];
        if (b < 0)
        {
            b += 'z' - 'a' + 1;
        }
        v[i] = b;
    }

    int b = v[0];
    for (int i = 0; i < s.length(); i++)
    {
        if (b == v[i])
        {
            f = true;
        }
        else
        {
            cout << "No" << endl;
            return 0;
        }
    }

    if (f == true)
    {
        cout << "Yes" << endl;
    }
    return 0;
}
