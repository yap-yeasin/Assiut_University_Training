#include <bits/stdc++.h>
using namespace std;

int main()
{   
    long n;
    cin>>n;
    if (n <= 1){
        cout<<"NO"<<endl;
    }
    int cnt = 0; 
	for (int i = 2; i < n; i++){
		if (n % i == 0){
            cnt+=1;
        }
    }
    if(cnt>0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
	return 0;
}
