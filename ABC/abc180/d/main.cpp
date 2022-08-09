#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int x, y, a, b;
	cin >> x >> y >> a >> b;

	long long int keiken = 0;
	//先に過去問
	while (x <= b / (a - 1) && x <= (y - 1) / a)
	{
		x = x * a;
		keiken++;
	}
	keiken += (y - x - 1) / b;
	cout << keiken << endl;
	return 0;
}
