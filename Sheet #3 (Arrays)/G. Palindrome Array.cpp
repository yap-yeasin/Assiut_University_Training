#include <bits/stdc++.h>
using namespace std;

int main()
{   
    long long n,a,co =0 ;
    cin >>n;
    int arr[n];

	for (int i = 0; i <n; i++){
        cin>>a;
        arr[i] = a;
    }
    for(int j=0;j<=(int)(n/2);j++){
        if(arr[j]==arr[n-j-1]){
            co+=1;
        }
    }
    if(co>(int)(n/2)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
	return 0;
}
