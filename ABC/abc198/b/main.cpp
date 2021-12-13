#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int len = n.length();

    int count = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (n[i] == '0')
        {
            count++;
        }
        else
        {
            break;
        }
    }

    int in = stoi(n);
    in = in / pow(10, count);
    n = to_string(in);

    bool f = true;
    for (int i = 0; i < (n.length() + 1) / 2; i++)
    {
        // cout << n[i] << endl;
        // cout << n[n.length()-i-1] << endl;
        if (n[i] != n[n.length() - i-1])
        {
            f = false;
        }
    }
    string byn;
    if (f == true)
    {
        byn = "Yes";
    }
    else
    {
        byn = "No";
    }
    cout << byn << endl;
    return 0;
}
