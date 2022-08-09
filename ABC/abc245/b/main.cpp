#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int count = 0;
	if (v[0] != 0)
	{
		cout << 0 << endl;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (v[i] == count)
		{
			continue;
		}
		else if (v[i] == count + 1)
		{
			count++;
		}
		else
		{
			count++;
			cout << count << endl;
			return 0;
		}
	}
	cout << v[n - 1] + 1 << endl;
	return 0;
}