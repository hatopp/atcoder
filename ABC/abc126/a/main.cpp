#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;

    s[k - 1] = s[k - 1] + 32;

    cout << s << endl;
    return 0;
}
