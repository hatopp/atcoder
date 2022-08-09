#include <bits/stdc++.h>
using namespace std;


int main()
{
	long long  n;
	cin >> n;
	long long ans = 0;

	if (1000 <= n) ans += n-999;
	if (1000000 <= n) ans += n-1000000+1;
	if (1000000000 <= n) ans+= n-1000000000+1;
	if (1000000000000 <=n) ans +=n-1000000000000+1;
	if (1000000000000000 <= n) ans+=n-1000000000000000+1;
	cout << ans << endl;
	return 0;
}
