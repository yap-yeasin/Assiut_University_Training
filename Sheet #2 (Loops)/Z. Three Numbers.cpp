#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long long k,s,x,y,z;
    cin >> k>>s;
    int count=0;
	for (int i = 0; i <=k ; i++){
		for(int j=0;j<=k;j++){
            // y = i;
            // z = j;
            x=s-j-i;
            if (x>=0&&x<=k){
                count+=1;
            }
        }
    }
    cout<<count<<endl;
	return 0;
}
