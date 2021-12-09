#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s  ;
    sort(s.begin(), s.end());

    bool f = false;

    if (s == "abc")
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
