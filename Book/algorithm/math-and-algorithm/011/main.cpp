#include <bits/stdc++.h>
using namespace std;

bool isprime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (isprime(i) == true)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
