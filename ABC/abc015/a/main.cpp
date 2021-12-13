#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int lena = a.length();
    int lenb = b.length();

    if (lena > lenb)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }
    return 0;
}