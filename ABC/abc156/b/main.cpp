#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, k;
    cin >> n >> k ;
    vector<int> v;
    while (n > 0)
    {
        v.push_back(n % k);
        n = n / k;
    }

    
    cout << v.size() << endl;

    return 0;
}