#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, a, b, c, d, x, y, z, n, count;
    string s, sans;
    cin >> n;
    count = 0;

    vector<int> A(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    a = *min_element(A.begin(), A.end());
    b = *max_element(A.begin(), A.end());

    vector<int> B(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> B[i];
    }
    c = *min_element(B.begin(), B.end());
    d = *max_element(B.begin(), B.end());

    unsigned int ans = c - b + 1;
    if (c - b + 1 < 0)
    {
        ans = 0;
    }

    cout << ans << endl;
    return 0;
}
