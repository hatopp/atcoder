#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace		std;
typedef long long	ll;

int	main(void)
{
	int t;
	cin >> t;
	int ans = 0;

	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			int input;
			cin >> input;
			if (input % 2 == 1)
				ans++;
		}
		cout << ans << endl;
		ans = 0;
	}
	return (0);
}