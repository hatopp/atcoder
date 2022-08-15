#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin >> n >> endl;

	vector<int> v(n);
	for (int k = 0; k < n; ++k)
	{
		cin >> v[k];
	}

	bool light = 1;
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
