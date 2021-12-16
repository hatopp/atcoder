#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int x;
    cin >> x;

    unsigned long long int mo = 100;
    long long int ct = 0;

    while (mo < x)
    {
        mo = mo + mo / 100;
        ct++;
    }

    cout << ct << endl;
    return 0;
}