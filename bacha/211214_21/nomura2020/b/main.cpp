#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '?'){s[i]='D';}
    }

    cout << s << endl;
    return 0;
}
