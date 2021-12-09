#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> data(3);
    for (int i = 0; i < 3; ++i)
    {
        cin >> data[i];
    }
    sort(data.begin(), data.end(), greater<int>());

    int ans = 0;
    if (data[0] == data[1])
    {
        ans = data[2];
    }
    else if (data[1] == data[2])
    {
        ans = data[0];
    }
    else
    {
        ans = data[1];
    }
    cout << ans << endl;
    return 0;
}
