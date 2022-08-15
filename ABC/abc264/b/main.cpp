#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int r, c;
	cin >> r >> c;

	string ans;
	bool a = 0;

	int test = ((r - 1) * 15) + c;
	// cout << test << endl;

	if (r % 2 == 1 || c % 2 == 1)
	{
		a = 1;
	}

	int v[] = {18,
			   20,
			   22,
			   24,
			   26,
			   28,
			   32,
			   44,
			   50,
			   52,
			   54,
			   56,
			   62,
			   64,
			   72,
			   74,
			   82,
			   84,
			   92,
			   94,
			   96,
			   100,
			   102,
			   104,
			   122,
			   124,
			   126,
			   130,
			   132,
			   134,
			   152,
			   154,
			   162,
			   164,
			   170,
			   172,
			   174,
			   176,
			   182,
			   194,
			   198,
			   200,
			   202,
			   204,
			   206,
			   208};
	for (int i = 0; i < 46; i++)
	{
		if (v[i] == test)
		{
			a = 0;
		}
	}

	if (a == 1)
	{
		cout << "black" << endl;
	}
	else
	{
		cout << "white" << endl;
	}
	return 0;
}
