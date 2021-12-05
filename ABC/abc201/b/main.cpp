#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n;

    a = 0;
    s = "";
    vector<pair<int, string>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> a;
        v.push_back({a, s});
    }
    

    //sort(all(v));
    sort(v.begin(), v.end(), greater{});
    //sort(v.begin(),v.end(),std::greater<int>());
    
    

    cout << v[1].second << endl;
    return 0;
} 