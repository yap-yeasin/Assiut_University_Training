#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,c=1;
    cin >>t;

	for(int test=1;test<=t;test++){
		long long n,cnt=1,x1,x2,y1,y2, mx_x1, mx_y1, mn_x2, mn_y2;
		bool error=false;
		cin>>n;
		cin>>x1>>y1>>x2>>y2;
		mx_x1 = x1, mx_y1 = y1, mn_x2 = x2, mn_y2 = y2;

		for(long long i=1;i<n;i++){
			long long x3,x4,y3,y4;
			cin>>x3>>y3>>x4>>y4;

            mx_x1 = max(mx_x1, x3);
            mx_y1 = max(mx_y1, y3);
            mn_x2 = min(mn_x2, x4);
            mn_y2 = min(mn_y2, y4);

			if (mn_x2 > mx_x1 && mn_y2 > mx_y1){
       	        // cnt++;   
      		}
			else{
				error=true;
			}
		}

		if(error){
			cout<<"Case #"<<test<<": "<<0<<endl;
        }
		else{
			cout<<"Case #"<<test<<": "<<(mn_x2-mx_x1)*(mn_y2-mx_y1)<<endl;

		}
	}
}
