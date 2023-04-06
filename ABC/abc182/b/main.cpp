#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace		std;
typedef long long	ll;

int	main(void)
{
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	int max = *max_element(v.begin(), v.end());
	int ans = *min_element(v.begin(), v.end());

	int count = 0;
	int now_max = 0;
	for (int i = max; i > 1; i--)
	{
		for (int j = 0; j < n; j++)
		{
			if (v[j] % i == 0)
			{
				count++;
				if (count > now_max)
				{
					now_max = count;
					ans = i;
				}
			}
		}
		count = 0;
	}
	cout << ans << endl;
}