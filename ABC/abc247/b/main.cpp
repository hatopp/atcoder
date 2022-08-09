#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin >> n;

	vector<pair<string, string>> v;
	for (int i = 0; i < n; i++)
	{
		string sei;
		string mei;
		cin >> sei >> mei;
		v.push_back(pair(sei, mei));
	}

	bool f = true;

	for (int i = 0; i < n; i++)
	{
		if (v[i].first == v[i + 1].first && v[i].second == v[i + 1].second)
		{
			f = false;
			cout << "No" << endl;
			return 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				if (v[i].first == v[j].second || v[i].second == v[j].first)
				{
					f = false;
					cout << "No" << endl;
					return 0;
				}
			}
		}
	}

	cout << "Yes" << endl;
	return 0;
}
