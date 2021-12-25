#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h = n / 3600;
    int nm = n - h * 3600;
    int m = nm / 60;
    int ns = nm - m * 60;
    int s = ns;

    cout << setfill('0') << right << setw(2) << h;
    cout << ":";
    cout << setfill('0') << right << setw(2) << m;
    cout << ":";
    cout << setfill('0') << right << setw(2) << s;
    cout << endl;
    return 0;
}