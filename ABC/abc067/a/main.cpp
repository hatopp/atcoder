#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string sans = "Impossible";
    if (a % 3 == 0 || b % 3 == 0 || (a + b) % 3 == 0)
    {
        sans = "Possible";
    }

    cout << sans << endl;
    return 0;
}