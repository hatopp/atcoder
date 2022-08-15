#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	//縦h×横w
	int ha, wa;
	cin >> ha >> wa;

	vector<vector<int>> a(ha, vector<int>(wa));
	for (int i = 0; i < ha; i++)
	{
		for (int j = 0; j < wa; j++)
		{
			cin >> a.at(i).at(j);
		}
	}
	int hb, wb;
	cin >> hb >> wb;
	vector<vector<int>> b(hb, vector<int>(wb));
	for (int k = 0; k < hb; k++)
	{
		for (int l = 0; l < wb; l++)
		{
			cin >> b.at(k).at(l);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
