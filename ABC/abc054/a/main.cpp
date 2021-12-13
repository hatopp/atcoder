#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string sans = "Bob";
    if (a == b)
    {
        sans = "Draw";
    }
    else if (b == 2 || a == 1)
    {
        sans = "Alice";
    }
    else if (b == 1)
    {
        sans = "Bob";
    }
    else if (b < a)
    {
        sans = "Alice";
    }

    cout << sans << endl;
    return 0;
}