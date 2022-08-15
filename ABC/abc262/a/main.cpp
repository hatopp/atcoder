#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int y;
	cin >> y;

	if (y % 4 == 2)
	{
		cout << y << endl;
		return 0;
	}
	else if (y % 4 == 0)
	{
		cout << y + 2 << endl;
		return 0;
	}
	else if (y % 4 == 1)
	{
		cout << y + 1 << endl;
		return 0;
	}
	else
	{
		cout << y + 3 << endl;
	}
}