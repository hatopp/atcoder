#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];
    for (int i = 0; i < 4; i++)
        a[i] = 0;
    string b[4] = {"ABC", "ARC", "AGC", "AHC"};
    for (int i = 0; i < 3; i++)
    {
        string c;
        cin >> c;
        for (int i = 0; i < 4; i++)
        {
            if (c == b[i])
                a[i] = 1;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (a[i] == 0)
        {
            cout << b[i] << endl;
            return 0;
        }
    }
}