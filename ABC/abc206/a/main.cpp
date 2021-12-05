#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int en = 1.08 * n;
    string ans = "Yay!";

    if (en == 206)
    {
        ans = "so-so";
    }
    else if (en > 206)
    {
        ans = ":(";
    }
    cout << ans << endl;
    return 0;
}
