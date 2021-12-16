#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<int> b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }

    vector<int> c(n - 1);
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> c[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        //cout << a[i] << "のターン";
        //食べるのは a[i] 満足度はb[a[i]]
        //cout << b[a[i] - 1] << " ";
        ans += b[a[i] - 1];

        //もしa[i]が前の次の連番なら、満足度c[i-1]追加
        if (a[i] - a[i - 1] == 1)
        {
            //cout << c[a[i - 1] - 1];
            ans += c[a[i - 1] - 1];
        }
        //cout << endl;
    }

    cout << ans << endl;
    return 0;
}