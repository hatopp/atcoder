#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    if (pow(a, c) < pow(b, c))
    {
        cout << '<' << endl;
        return 0;
    }
    else if (pow(a, c) > pow(b, c))
    {
        cout << '>' << endl;
        return 0;
    }
    else
    {
        cout << '=' << endl;
        return 0;
    }
}