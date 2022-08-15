#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	vector<int> v;
	v[0] = 1;
	v[1] = 0;
	v[2] = 5;
	for (int i = 0; i < 44; i++)
		v[i] = v[i - 1] + v[i - 2];
	cout << v[43];
}