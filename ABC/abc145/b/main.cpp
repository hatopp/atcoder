#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool f = false;
    string mae = s.substr(0, n / 2);
    string ushiro = s.substr(n / 2, n);
    if (n % 2 == 0 && mae == ushiro)
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
