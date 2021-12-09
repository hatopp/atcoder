#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool f = false;
    if (s[0] == '9' || s[1] == '9')
    {
        f = true;
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