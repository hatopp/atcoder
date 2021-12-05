#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N;
	cin >> N;
	int count = N;

	vector<vector<int>> date(N, vector<int>(N));

	for (int i = 0; i <= N ; i++) {
		for (int j = 0; j <= N; j++) {
			cin >> date.at(i).at(j);
		}
	}

	for	(int a = 1; a <= N; a++){
		for (int b = 0; b <= N; b++){
			if (date.at(a).at(0)==date.at(b).at(0)){
				for (int c = 1; c <=date.at(a).at(0); c++){
					if (date.at(a).at(c)==date.at(b).at(c)){
						count--;
					}
				}
			}
		}
	}

	cout << count << endl;
	return 0;
}
