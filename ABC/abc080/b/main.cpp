#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int in = stoi(n);

    int sum = 0;
    for (int i = 0; i < n.length(); i++)
    {
        sum += n[i] - '0';
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
