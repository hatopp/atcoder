#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> a >> b >> c;
    sans = "Takahashi";

    //青木くんが勝つパターンを考える
    if (c == 1) //先手青木
    {

        if (b - a > 0)
        {
            sans = "Aoki";
        }
    }

    if (c == 0) //先手高橋
    {
        if (b - a >= 0)
        {
            sans = "Aoki";
        }
    }
    cout << sans << endl;
    return 0;
}
