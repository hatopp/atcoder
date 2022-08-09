#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int n, k, a[100009], b[100009], ans[100009];
bool bok[100009], aok[100009], ok[100009];

bool f = 1;
bool adfs(int pos);
bool bdfs(int pos);
void kuri(int pos);
int main()
{
	cin >> n >> k;

	for (int i = 0; i < n; ++i)
		cin >> a[i];

	for (int i = 0; i < n; ++i)
		cin >> b[i];

	for (int pos = 0; pos < n; pos++)
		kuri(pos);
	cout << "Y" << endl;
}

bool adfs(int pos)
{
	if (aok[pos] == 1)
	{
		ans[pos + 1] = a[pos + 1];
		f = 1;
	}
	else
		f = 0;

	return (f);
}

bool bdfs(int pos)
{
	bool s;
	if (bok[pos] == 1)
	{
		ans[pos + 1] = b[pos + 1];
		f = 1;
	}
	else
		f = 0;

	return (f);
}

void kuri(int pos)
{
	if (f == 1)
		f = adfs(pos);

	if (f == 0)
		f = bdfs(pos);

	if (f == 0 && pos > 0)
		cout << pos << endl;
	pos--;
	kuri(pos);

	if (f == 0)
		cout << "N" << endl;
}
