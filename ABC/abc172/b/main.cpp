#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n;
    string s,t;
    cin >> s >> t;
    int count = 0;
    for (int i=0; i<s.size(); i++)
    {
        if (s[i] != t[i]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}