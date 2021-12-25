#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int A[n] = {0};
    int B[n] = {0};

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        A[x - 1]++;
        A[y - 1]++;
    }
    sort(A, A + n);

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        B[x - 1]++;
        B[y - 1]++;
    }
    sort(B, B + n);

    /*for (int i = 0; i < n; i++)
    {
        cout << A[i] << " " << B[i] << endl;
    }
*/
    bool f = true;
    for (int i = 0; i < n; i++)
    {
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
