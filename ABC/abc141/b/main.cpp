#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s ;
    bool f = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='R' && i%2!=0){f=false;}
        if (s[i]=='L' && i%2!=1){f=false;}
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