#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	map<int, int> mp;
	for (int i = 0; i < 10; i++)
	{
		int a;
		cin >> a;
		mp[i] = a;
	}

	int dis = 0;
	int ans = mp[dis];
	int ans2 = mp[ans];
	int ans3 = mp[ans2];
	cout << ans3 << endl;
	return 0;
}