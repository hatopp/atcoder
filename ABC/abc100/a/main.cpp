#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    bool f = false;
    if (a <= 8 && b <= 8)
    {
        f = true;
    }

    string byn;
    if (f == true)
    {
        byn = "Yay!";
    }
    else
    {
        byn = ":(";
    }
    cout << byn << endl;
    return 0;
}