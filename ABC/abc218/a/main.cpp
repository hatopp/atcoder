#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n;
    string s;
    cin >> n>> s;

    string ans = "No";

    if (s[n-1] == 'o'){
        ans = "Yes";
    }

    cout << ans << endl;
    return 0;
}    

