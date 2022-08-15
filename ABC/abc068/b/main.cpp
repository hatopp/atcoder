#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	{
		int n;
		int count = 0;
		cin >> n;
		while (n >= 2)
		{
			n = n / 2;
			count++;
		}
		cout << pow(2, count) << endl;
		return 0;
	}
}