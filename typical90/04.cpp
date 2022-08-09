#include <bits/stdc++.h>
using namespace	std;

int	main(void)
{
	int H, W;
	cin >> H >> W;
	vector<vector<int>> mas(H, vector<int>(W));
	vector<vector<int>> ans(H, vector<int>(W));
	vector<int> tate(H);
	vector<int> yoko(W);
	//入力
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cin >> mas[i][j];
		}
	}
	//計算
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			tate[i] += mas[i][j];
			yoko[j] += mas[i][j];
		}
	}
	//たてたすよこ
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			ans[i][j] = tate[i] + yoko[j] - mas[i][j];
		}
	}
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cout << ans[i][j];
			if (j >= 0)
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
}
