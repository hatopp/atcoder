#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    int wa = 0;
    string s;

    for (int i = 1; i < n + 1; i++)
    {
        s = to_string(i);
        int len = s.length();
        // cout << len << endl;
        for (int j = 0; j < len; j++)
        {
            wa = i%1000 + i%100 + i%10 + ;
        }
        cout << wa << endl;
        // if (wa)
    }

    return 0;
}
