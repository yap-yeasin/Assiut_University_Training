#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,r,m,lm,rx,ans=1;
    cin >>l>>r>>m;

	lm=min(l,r);
	rx=max(r,r);

	for(long long i=lm;i<=rx;i++){
		ans*=i;
		// cout<<i<<" i "<<ans<<endl;
		ans%=m;  // mod 
		// cout<<ans<<endl;
	}
	cout<<ans;
	
}
 
