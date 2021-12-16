#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char c;

    int ans;
    for (int i=0; i<20000; i++) 
    {
        cin >> a>>c>>b ;
        if (c == '+')
        {
            cout << a + b << endl;
        }
        else if (c == '-')
        {
            cout << a - b << endl;
        }
        else if (c == '*')
        {
            cout << a * b << endl;
        }
        else if (c == '/')
        {
            cout << a / b << endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}
