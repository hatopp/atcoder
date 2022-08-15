#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int n = 5;
	string ans = "No";
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
		cin >> v[i];
	sort(v.begin(), v.end());

	if (v[0] != v[4])
	{
		if (v[0] == v[1] && v[1] == v[2] && v[3] == v[4])
		{
			ans = "Yes";
		}
		else if (v[0] == v[1] && v[2] == v[3] && v[3] == v[4])
		{
			ans = "Yes";
		}
	}
	cout << ans << endl;
}
