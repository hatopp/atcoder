#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> s >> n;

    // a / b >> (a + (b - 1)) / b b

    if (n % 5 == 0)
    {
        cout << s[n / 5 - 1] << s[4] << endl;
    }
    else
    {
        cout << s[(n + 5 - 1) / 5 - 1] << s[n - (n / 5) * 5 - 1] << endl;
    }
    return 0;
}