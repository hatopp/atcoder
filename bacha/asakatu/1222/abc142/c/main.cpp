#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    pair<int, int> A[100009];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a;
        A[i].first = a;
        A[i].second = i;
    }

    sort(A + 1, A + n + 1);
    for (int i = 1; i < n; i++) {
        cout << A[i].second << " ";
    }
    cout << A[n].second << endl;
    return 0;
}
