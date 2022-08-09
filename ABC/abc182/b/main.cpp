#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int n;
	vector<int> v(n);
	for (int i=0; i<n; ++i){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	
	map<int,int> mp(v[n]);

	for (int i=0;i<n;i++)
	{
		for(int j=0;j<v[n];j++)
		{
			if (v[i] % j == 0)
				g[j]++;
		}
	}
	sort
	cout << ans << endl;
	return 0;
}