#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace		std;
typedef long long	ll;

int	main(void)
{
	int h, w, r, c;

	cin >> h >> w >> r >> c;

	int count = 0;

	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
		//  マス(i,j)とマス
			if ((abs(i - r) + abs(j - c)) == 1)
				count++;
		}
	}
	cout << count << endl;
	return (0);
}