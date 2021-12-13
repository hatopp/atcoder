#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string sans;
    if (n == 100)
    {
        sans = "Perfect";
    }
    else if (90 <= n)
    {
        sans = "Great";
    }
    else if (60 <= n)
    {
        sans = "Good";
    }
    else
    {
        sans = "Bad";
    }

    cout << sans << endl;
    return 0;
}