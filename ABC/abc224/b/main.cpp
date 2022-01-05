#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    //縦h×横w
    vector<vector<int>> v(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> v.at(i).at(j);
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h; j++) {
