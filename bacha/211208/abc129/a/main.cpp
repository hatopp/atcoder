#include <bits/stdc++.h>
using namespace std;

int	main(void)
{
	int n;
	cin >> n;
	int w[n];

	int hi = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
		hi += w[i]
	}

	const int INF = 0x3fffffff;
	int ans = 10000;

	int mi = 0;
	for (int i = 0; i < n; i++)
	{
		hi -= w[i];
		mi = +w[i];
		if (ans > abs(mi - hi))
		{
			ans = abs(mi - hi);
		}
	}
	cout << ans << endl;
	return (0);
}
