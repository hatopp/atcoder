#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    long int x, y;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (sqrt(x * x + y * y )<= d)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
