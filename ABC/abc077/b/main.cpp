#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace		std;
typedef long long	ll;

int	main(void)
{
	int n;
	cin >> n;
	int ans = -1;
	int i=0;

	// cout << i << " " << n << " " << ans << endl;
	for (int i = 0; i <= n; i++)
	{
		// cout << i << " " << n << " " << ans << endl;
		if (i * i <= n && ans < i * i){
			ans = i * i;
		}
		else
		{
			cout << ans << endl;
			return (0);
		}
	}
	cout << ans << endl;
	return (0);
}