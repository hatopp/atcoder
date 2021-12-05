#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count = 0;
    cin >> s;
    for (int i = 0; i <= 2; i++)
    {
        if (s[i] == '1')
        {
            count = count + 1;
        }
    }
    cout << count << endl;
    return 0;
}