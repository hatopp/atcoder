#include <bits/stdc++.h>
using namespace std;

bool kaibun(string s)
{
	int len = s.size();
	bool f = true;

		for(int i=0;i<len/2;i++)
		{
			if(s[i] != s[len-1])	f = false;
		}
	return f;
}

int main()
{
	string s;
	cin >> s;
	
	if (kaibun(s) == true)
	{
		int n = s.size();
		string mae = s.substr(0,n/2);
		string ushiro = s.substr((n+1)/2,n/2);
		if (kaibun(mae) == true && kaibun(ushiro))
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}


	
	
