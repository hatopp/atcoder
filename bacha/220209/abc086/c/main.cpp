#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int t[100001],x[100001],y[100001];

	t[0] = 0;
	x[0] = 0;
	y[0] = 0;
	bool ans = true;
	
	for (int i=1; i<=n; i++)
	{
		cin >> t[i] >> x[i] >> y[i];
	}

	for (int i=0;i<n;i++)
	{
		int time_sa = t[i+1] -t[i];
		int basho_sa = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);
		if (basho_sa % 2 != time_sa % 2 || time_sa < basho_sa )
			ans = false;
	}
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

