#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    
    for (int i = 0; i < s.length(); i++)
    {
        //cout << s[i];
        s[i] = s[i] + n;
        if (s[i] > 'Z')
        {
            s[i] -= 26;
        }
        cout << s[i];
    }
    cout << endl;
    return 0;
}
