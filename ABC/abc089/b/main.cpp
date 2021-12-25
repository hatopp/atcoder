#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (v[i] == "Y")
        {
            cout << "Four" << endl;
            return 0;
        }
    }
    cout << "Three" << endl;
    return 0;
}
