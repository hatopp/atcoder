#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int n,x;
	cin >> n >> x;

	int num = 0;
	if (x % n == 0)
		num = x / n;
	else
		num = x / n + 1;

	cout << char('A'+num-1) << endl;
	return 0;
}