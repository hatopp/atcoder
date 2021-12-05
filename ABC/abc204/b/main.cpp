#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count;
    string s;
    cin >> n;
    count = 0;

    vector<int> data(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
        if (data[i] >= 10)
        {
            count += data[i] - 10;
        }
    }

    cout << count << endl;
    return 0;
}
