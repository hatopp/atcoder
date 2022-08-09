#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int isnum(char a,char b)
{
	int c=0;
	if(a<b){c=1;}
	else if(a>b){c=2;}
	return c;
}

int main()
{
	string a,b;
	cin >> a >> b;
	if(a == b)
	{
		cout<<"EQUAL"<<endl;
		return 0;
	}

	int alen = a.size();
	int blen = b.size();
	int boo = 0;

	if(alen == blen)
	{
		for(int i = 0; i < alen; i++)
		{	
			boo = isnum(a[i],b[i]);
			if(boo!=0){break;}
		}
	}
	
	if (alen < blen) {boo = 1;}
	else if (alen > blen) {boo = 2;}

	if (boo == 1){cout<<"LESS"<<endl;}
	if (boo == 2){cout<<"GREATER"<<endl;}
	return 0;
}


