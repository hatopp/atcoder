#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	vector<int> b(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
	}

	int ans1 = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == b[i])
			ans1++;
	}

	int ans2 = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i] == b[j] && i != j)
				ans2++;
		}
	cout << ans1 << endl;
	cout << ans2 << endl;
	return 0;
}
