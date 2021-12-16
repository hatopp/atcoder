#include <bits/stdc++.h>
using namespace std;

int main()
{
    int in;
    cin >> in;
    string sn = to_string(in);

    int sum = 0;
    for (int i = 0; i < sn.length(); i++)
    {
        sum += (sn[i] - '0');
    }

    if (in % sum == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
