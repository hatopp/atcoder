#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s ;
    int ans = 0;
    int len = s.size();

// +の数で場合分け
// 10 + 20 + 5の考え方
// 愚直
//わからん
    for (int i=1; i<len; i++){
        for (int j=0; j<len 