#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for (int i = n - 1; i > 0; --i)
    {
        if (a[i] == a[i - 1])
        {
            count--;
        }
    }
    cout << count << endl;
}
