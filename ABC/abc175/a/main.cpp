#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> s;
    count = 0;

    //chikarawaza
    if (s == "RRR")
        count = 3;
    else if (s == "SRR" || s == "RRS")
        count = 2;
    else if (s == "SSS")
        count = 0;
    else
        count = 1;
    cout << count << endl;
    return 0;
}