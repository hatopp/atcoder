#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> s;

    vector<string> data{"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    for (int i = 0; i < 7; i++)
    {
        if (data[i] == s)
        {
            ans = 7 - i;
        }
    }
    cout << ans << endl;
    return 0;
}
