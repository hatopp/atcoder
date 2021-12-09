#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    /*
    //縦h×横w
    vector<vector<int>> v(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> v.at(i).at(j);
        }
    */

    vector<pair<int, string>> data(n);
    for (int i = 0; i < n; i++)
    {
        cin >> data[i].second >> data[i].first;
    }

    sort(data.begin(), data.end(), greater<int>());
    // sort(all(data));

    cout << data[1].second << endl;
    return 0;
}