#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, y;
    cin >> n >> y;

    if ((((y % 10000) % 5000) % 1000) != 0)
    {
        cout << -1 -1 -1 << endl;
    }

    else if ()
    {
        int x;
        
    }


    else
    {
        int a,b,c;
        a = y/10000;
        b = (y-10000*a)/5000;
        c = (y-10000*a-5000*b)/1000;
        cout << a << b << c << endl;
    }
    return 0;

}

