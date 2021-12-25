#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,r,y,b,a,ans;
    r=0;y=0;b=0;ans=0;
    cin >> n ;

    for (ll i=0; i<n; i++) {
        cin >> a ;
        if(a==1){r++;}
        if(a==2){y++;}
        if(a==3){b++;}
    }


    if(r>=2){ans+=r*(r-1)/2;}
    if(y>=2){ans+=y*(y-1)/2;}
    if(b>=2){ans+=b*(b-1)/2;}

    cout << ans << endl;
    return 0;}

