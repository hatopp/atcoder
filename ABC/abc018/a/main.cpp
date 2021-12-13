#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, string>> v;

    int a, b, c;
    cin >> a >> b >> c;

    v.push_back({a, "T"});
    v.push_back({b, "J"});
    v.push_back({c, "S"});

    sort(v.begin(), v.end(), greater<pair<int, string>>());

    string sans(3, 'a');
    for (int i = 0; i < 3; i++)
    {
        if (v[i].second == "T")
        {
            sans.replace(0, 1, to_string(i + 1));
        }
        else if (v[i].second == "J")
        {
            sans.replace(1, 1, to_string(i + 1));
        }
        else if (v[i].second == "S")
        {
            sans.replace(2, 1, to_string(i + 1));
        }
    }

    for (int i=0; i<3; i++) {
        cout << sans[i] << endl;
    }
    return 0;
}
