#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if ((s.substr(s.size() - 2, 2)) == "er")
    {
        cout << "er" << endl;
    }

    else if ((s.substr(s.size() - 3, 3)) == "ist")
    {
        cout << "ist" << endl;
    }
    return 0;
}