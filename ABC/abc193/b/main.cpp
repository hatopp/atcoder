#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, n, count, ans;
    string s, sans;
    cin >> n;
    
    //縦h×横w
    vector<vector<int>> data(n, vector<int>(3));
    //二重ループ
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> data.at(i).at(j);
        }
    }
    
    for (int i=0; i<n;i++){
        if ( data[i][0] > data[i][2]){
            data[i][1] = 0;
        }
    }

    