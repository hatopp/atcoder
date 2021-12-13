#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    bool f = false;

    if (n[0] == n[1] && n[1] == n[2])
    {
        f = true;
    }
    else if (n[1] == n[2] && n[2] == n[3])
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