#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    string c = a + b;
    int d = stoi(c);

    for (int i = 1; i < d / 2; i++)
    {

        if (d % i == 0 && d / i == i)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
