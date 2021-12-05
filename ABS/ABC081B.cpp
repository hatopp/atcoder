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
    int count = 0;
    bool flg = true;

    
    while (flg == true)
    {
        for (int i = 0; i < n; ++i)
        {
            if (a[i] % 2 == 1)
            {
                flg = false;
                break;
            }
            else
            {
                a[i] = a[i] / 2;
                count++;
            }
        }
    }

    cout << count/n << endl;
    return 0;
}
