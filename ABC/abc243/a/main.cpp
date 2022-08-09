#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int v, a, b, c;
	cin >> v >> a >> b >> c;
	string wh = "F";
	while (1)
	{
		if (v < a)
		{
			wh = "F";
			break;
		}
		v -= a;
		if (v < b)
		{
			wh = "M";
			break;
		}
		v -= b;
		if (v < c)
		{
			wh = "T";
			break;
		}
		v -= c;
	}
	cout << wh << endl;
	return 0;
}