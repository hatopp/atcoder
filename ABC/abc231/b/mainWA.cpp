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
    }

    if (n == 1)
    {
        cout << v[0] << endl;
        return 0;
    }

    sort(v.begin(), v.end(), greater<string>());

    int count, ans;
    count = 1;
    ans = 1;
    map<int, string> mans;
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            count++;
        }
        else
        {
            mans[count] = v[i-1];
            ans = max(count, ans);
            count = 1;
        }
    }
    cout << mans[ans] << endl;

    return 0;
}