#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int en = n / 1.08 + 1;

    for (int i = 1; i <= en; i++)
    {
        int eni = i * 1.08;
        if (eni == n)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
    return 0;
}
