#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	int N;
	int K;
	int A;

	cin >> N >> K >> A;
	int ans = 0;

if (K < N-A+1){
	ans = A+K;
}

else if ((K-(N-A+1))%N==0){
	ans = N;
}

else {
	ans = (K-(N-A+1))%N;
}

cout << ans <<endl;
}
