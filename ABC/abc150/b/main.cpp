#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.substr(i, 3) == "ABC")
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}