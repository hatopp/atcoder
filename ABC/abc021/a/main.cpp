#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    string s = "";
    while (n >= 8)
    {
        s += to_string(8);
        n = n- 8;
    }

    while (n >= 4)
    {
        s += to_string(4);
        n = n - 4;
    }

    while (n >= 2)
    {
        s += to_string(2);
        n = n - 2;
    }

    while (n > 0)
    {
        s += to_string(1);
        n = n - 1;
    }

    cout << s.length() << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << endl;
    }

    return 0;
}
