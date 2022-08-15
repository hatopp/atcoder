#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int r, c;
	cin >> r >> c;

	int h = 2;
	int w = 2

		//縦h×横w
		vector<vector<int>>
			v(h, vector<int>(w));
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> v.at(i).at(j);
		}
	}
	cout << v[r - 1][c - 1] << endl;
	return 0;
}
