#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    string a, b;
    cin >> k >> a >> b;

    int ia = 0;
    int ib = 0;

    for (int i = 0; i < a.size(); i++)
    {
       // cout << a[i] - '0' << pow(k, (a.size() - 1 - i)) << endl;
        ia += (a[i] - '0') * pow(k, a.length() - 1 - i);
    }

    for (int i = 0; i < b.size(); i++)
    {
       // cout << b[i] - '0' << pow(k, (b.size() - 1 - i)) << endl;
        ib += (b[i] - '0') * pow(k, b.length() - 1 - i);
    }

    cout << ia *ib<< endl;
    return 0;
}