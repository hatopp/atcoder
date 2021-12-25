#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int A[n + 1] = {0};
    int B[n + 1] = {0};

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        A[x]++;
        A[y]++;
    }
    sort(A, A + n);

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        B[x]++;
        B[y]++;
    }
    sort(B, B + n);

    bool f = true;
    for (int i = 1; i <= n; i++)
    {
        // cout << i << "番目" << A[i] << " " << B[i] << endl;

        if (A[i] == B[i])
        {
            continue;
        }
        else
        {
            f = false;
            break;
        }
    }

    string byn;
    if (f == true)
    {
        byn = "Yes";
    }
    else
    {
        byn = "No";
    }
    cout << byn << endl;
    return 0;
}
