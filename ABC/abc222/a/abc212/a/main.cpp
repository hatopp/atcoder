#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int wa = a + b;

    if (wa == a)
    {
        cout << "Gold" << endl;
    }
    else if (wa == b)
    {
        cout << "Silver" << endl;
    }
    else
    {
        cout << "Alloy" << endl;
    }
    return 0;
}