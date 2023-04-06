#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace		std;
typedef long long	ll;

int	main(void)
{
	int	ans;

	int x, y, n;
	cin >> x >> y >> n;
	if (3 * x < y)
		cout << n * x << endl;
	else
	{
		ans = 0;
		ans += n / 3 * y;
		ans += n % 3 * x;
		cout << ans << endl;
	}
}
