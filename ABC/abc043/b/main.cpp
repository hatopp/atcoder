#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            ans = ans + "0";
        }
        else if (s[i] == '1')
        {
            ans = ans + "1";
        }
        else if (ans != "" && s[i] == 'B')
        {
            ans.erase(--ans.end());
        }
        else
        {
            continue;
        }
    }
    cout << ans << endl;
    return 0;
}
