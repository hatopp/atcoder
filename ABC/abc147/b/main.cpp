#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    string rs (s.rbegin(), s.rend());

    int count = 0;
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != rs[i])
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}