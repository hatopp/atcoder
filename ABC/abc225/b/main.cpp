#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    //縦h×横w
    vector<vector<int>> v(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> v.at(i).at(j);
        }
    }

    sort(v.begin(),v.end());
    
    for (int i=0; i<n; i++) {
        