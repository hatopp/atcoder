#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> s(14, 'a');
    vector<int> h(14, 'a');
    vector<int> c(14, 'a');
    vector<int> d(14, 'a');

    string e;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> e >> num;

        if (e == "S")
        {
            s[num] = 'b';
        }
        if (e == "H")
        {
            h[num] = 'b';
        }
        if (e == "C")
        {
            c[num] = 'b';
        }
        if (e == "D")
        {
            d[num] = 'b';
        }
    }

    for (int i = 1; i <= 13; i++)
    {
        if (s[i] == 'a')
        {
            cout << "S " << i << endl;
        }
    }
    for (int i = 1; i <= 13; i++)
    {
        if (h[i] == 'a')
        {
            cout << "H " << i << endl;
        }
    }
    for (int i = 1; i <= 13; i++)
    {
        if (c[i] == 'a')
        {
            cout << "C " << i << endl;
        }
    }
    for (int i = 1; i <= 13; i++)
    {
        if (d[i] == 'a')
        {
            cout << "D " << i << endl;
        }
    }
    return 0;
}