#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int jud = c*c - a*a - b*b;
    string ans = "No";

    if ( jud > 0 )
        ans = "Yes";

    cout << ans << endl;
    return 0;
}
