#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace		std;
typedef long long	ll;

int	main(void)
{
	int n, a, b;
	cin >> n >> a >> b;

	//縦h×横w
	vector<vector<char>> ans(a * n, vector<char>(b * n));
	//縦h×横w
	char last_color = '.';

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			// ansのa*(i-1)からa*i段目までは指定の色
			// 横幅はb*(j-1)からb*jまで
			for (int k = a * (i - 1) - 1; k <= a * i; k++)
			{
				for (int l = b * (j - 1) - 1; l <= b * j; l++)
				{
					if (last_color=='#'){
						ans.at(k).at(l) = '.';
						}
					else
					{
						ans.at(k).at(l) = '#';
						last_color='.';
					}

				}
			}
		}
	}

	for (int i = 0; i < a*n; i++) {
		for (int j = 0; j < b*n; j++) {
			cout << ans.at(i).at(j);
		}
		cout << endl;
	}
}