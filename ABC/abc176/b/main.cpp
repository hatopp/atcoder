#include <bits/stdc++.h>
using namespace std;

int main()
{
    char n;
    int wa = 0;
    bool f = false;

    while (cin >> n)
    {
        wa += n-'0';
    }
    
    if (wa == '0' || wa % 9 == 0)
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
