#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int l, r, L, R;
	cin >> l >> r >> L >> R;

	// 0 1 2 3 4 5
	//  0 1 2 3 4

	int j = max(r, R);
	vector<int> v(j, 0);

	for (int i = l; i < r; i++)
	{
		v[i] += 1;
	}

	for (int k = L; k < R; k++)
	{
		v[k] += 1;
	}

	int two_count = 0;

	for (int h = 0; h < j; h++)
	{
		// cout << v[h] << endl;
		if (v[h] == 2)
		{
			two_count++;
		}
	}
	cout << two_count << endl;
	return 0;
}
