#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    int zen = 0;
    int fen = 0;

    for (int i = 0; i < n; i++)
    {
        if (zen < a + b && s[i] == 'a')
        {
            cout << "Yes" << endl;
            zen++;
        }
        else if (zen < a + b && fen < b && s[i] == 'b')
        {
            cout << "Yes" << endl;
            zen++;
            fen++;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
