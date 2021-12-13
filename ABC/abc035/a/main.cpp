#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w, h;
    cin >> w >> h;

    if (w / 16 * 9 == h)
    {
        cout << "16:9" << endl;
    }
    else
    {
        cout << "4:3" << endl;
    }
    return 0;
}