#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            count++;
        }

        else if (s[i] == 'C')
        {
            count++;
        }

        else if (s[i] == 'G')
        {
            count++;
        }

        else if (s[i] == 'T')
        {
            count++;
        }
        else
        {
            ans = max(count, ans);
            count = 0;
        }
    }
    ans = max(count, ans);
    count = 0;

    cout << ans << endl;
    return 0;
}