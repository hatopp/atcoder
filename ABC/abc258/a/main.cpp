#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int k;
	cin >> k;
	for (int i = 0; i < 2; i++)
	{
		if (k == 60)
		{
			cout << i + 21 << ":00" << endl;
			return 0;
		}
		else if (k <= 9 && k < 60)
		{
			cout << "21:0" << k << endl;
			return 0;
		}
		else if (k > 9 && k < 60)
		{
			cout << "21:" << k << endl;
			return 0;
		}

		else
		{
			k -= 60;
		}
	}
}
