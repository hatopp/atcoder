#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace		std;
typedef long long	ll;

int	main(void)
{
	int k;

	cin >> k;
	if (k == 60)
	{
		cout << "22:00" << endl;
		return (0);
	}
	else if (k < 10)
	{
		cout << "21:0" << k << endl;
		return (0);
	}
	else if (k > 9 && k < 60)
	{
		cout << "21:" << k << endl;
		return (0);
	}
	else
	{
		k -= 60;
		if (k < 10)
		{
			cout << "22:0" << k << endl;
			return (0);
		}
		cout << "22:" << k << endl;
		return (0);
	}
}