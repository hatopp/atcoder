#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    char charsm = s[0];
    char charsM = s[0];
    int intsm = 0;
    int intsM = 0;
    for (int i = 1; i < s.length(); i++)
    {
        charsm = min(charsm, s[i]);
        charsM = max(charsM, s[i]);
        if (charsm == s[i])
        {
            intsm = i;
        }
        if (charsM == s[i])
        {
            intsM = i;
        }
    }

    string sm = s.substr(intsm) + s.substr(0, intsm - 1);
    string sM = s.substr(intsM) + s.substr(0, intsM - 1);

    cout << sm << endl;
    cout << sM << endl;
    
    return 0;
}
