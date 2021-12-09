#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string tmp = "oxxoxxoxxoxx";
    int len = s.length();
    bool f = false;
    for (int i = 0; i < 13; i++)
    {
        if (s == tmp.substr(i, len))
        {
            f = true;
            break;
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
