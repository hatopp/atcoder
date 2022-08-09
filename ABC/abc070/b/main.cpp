#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	
	int ans=0;

	if (a  < c && c < b && b < d)
		ans = c - b;
	else if (a < c && c < d && d < b )
		ans = d-c;
	else if ( c < a && b < d)
		ans = b - a;
	else if (c < a && a < d && d < b)
		ans = d-a;
	else 
		ans = 0;

		cout << abs(ans) << endl;
		return 0;
}