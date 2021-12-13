#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int count = c / min(a, b);

    cout << count << endl;
    return 0;
}